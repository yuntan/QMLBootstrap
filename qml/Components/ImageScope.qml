import QtQuick 2.2

/* ImageScope - Scope a Image
 * property string source
 *          Image source
 * property real magnification
 *          magnification of image (>0)
 * property int scopeX / scopeY
 *          position of scope
 * property real radius
 *          radius of scope
 *
 * ImageScope {
 *   width: 50; height: 50
 *   source: "sample.img"
 *   radius: width / 2
 *   scopeX: 30; scopeY: 20
 * }
 */
Item {
    id: imgScope

    property real magnification: 1.0
    property int scopeX: 0
    property int scopeY: 0
    property real radius: 0

    // interImage aliases
    property alias fillMode: interImage.fillMode
    property alias horizontalAlignment: interImage.horizontalAlignment
    property alias mirror: interImage.mirror
    property alias paintedHeight: interImage.paintedHeight
    property alias paintedWidth: interImage.paintedWidth
    property alias progress: interImage.progress
    property alias smooth: interImage.smooth
    property alias source: interImage.source
    property alias sourceSize: interImage.sourceSize
    property alias status: interImage.status
    property alias verticalAlignment: interImage.verticalAlignment

    Image {
        id: interImage
        visible: false
        width: sourceSize.width * magnification
        height: sourceSize.height * magnification
    }

    ShaderEffect {
        id: effect
        anchors.fill: parent

        implicitWidth: interImage.sourceSize.width
        implicitHeight: interImage.sourceSize.height

        property Image _image: interImage
        property real _w: width / interImage.width
        property real _h: height / interImage.height
        property real _rX: radius / interImage.width / _w
        property real _rY: radius / interImage.height / _h
        property real _cX: scopeX / interImage.width
        property real _cY: scopeY / interImage.height

        fragmentShader: imageScopeFragShader

    }
}
