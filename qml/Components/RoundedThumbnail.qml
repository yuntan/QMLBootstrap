import QtQuick 2.2

/* RoundedThumbnail - Round shaped image with border
 * property string source
 * property real radius
 * property size sourceSize
 *
 * RoundedThumbnail {
 *   source: "sample.png"
 *   radius: 30
 * }
 */
Item {
    id: rThumb

    property alias source: interImage.source
    property alias radius: thumbRect.radius
    property alias sourceSize: interImage.sourceSize

    implicitWidth: interImage.sourceSize.width
                   + (thumbRect.border.width + effect.anchors.margins) * 2
    implicitHeight: interImage.sourceSize.height
                    + (thumbRect.border.width + effect.anchors.margins) * 2

    Image {
        id: interImage
        anchors.fill: parent
        visible: false
    }

    Rectangle {
        id: thumbRect
        anchors.fill: parent
        color: bs["thumbnail-bg"]
        border.width: 1*dp; border.color: bs["thumbnail-border"]

        ShaderEffect {
            id: effect
            anchors.fill: parent; anchors.margins: bs["thumbnail-padding"]*dp

            property Image _image: interImage
            property real _rX: radius / interImage.width
            property real _rY: radius / interImage.height

            fragmentShader: roundedImageFragShader
        }
    }
}
