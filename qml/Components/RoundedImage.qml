import QtQuick 2.2

/* RoundedImage - Round shaped image
 * property string source
 *          Image source
 * property real radius
 *
 * RoundedImage {
 *   source: "sample.img"
 *   radius: 30
 * }
 */
Item {
    id: roundedImg

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

    implicitWidth: interImage.sourceSize.width
    implicitHeight: interImage.sourceSize.height

    Image {
        id: interImage
        anchors.fill: parent
        visible: false
    }

    ShaderEffect {
        id: effect

        anchors.fill: parent

        property Image _image: interImage
        property real _rX: radius / interImage.width
        property real _rY: radius / interImage.height

        fragmentShader: roundedImageFragShader
    }
}
