import QtQuick 2.2

/* RoundedImage - Round shaped image
 * property string source
 *          Image source
 * property real radius
 * property size sourceSize
 *
 * RoundedImage {
 *   source: "sample.img"
 *   radius: 30
 * }
 */
Item {
    id: roundedImg
    property alias source: interImage.source
    property real radius: 0
    property alias sourceSize: interImage.sourceSize

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
