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
 * property size sourceSize
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

    property alias source: interImage.source
    property real magnification: 1.0
    property int scopeX: 0
    property int scopeY: 0
    property real radius: 0
    property alias sourceSize: interImage.sourceSize

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
