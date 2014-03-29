import QtQuick 2.2

/* Thumbnail - Image with border
 * property string source
 * property bool round
 *          Whether button should have rounded corner.
 * property size sourceSize
 *
 * Thumbnail {
 *   source: "sample.png"
 *   round: false
 * }
 */
Item {
    id: thumbnail

    property alias source: thumbImage.source
    property bool round: true
    property alias sourceSize: thumbImage.sourceSize

    implicitWidth: thumbImage.sourceSize.width
                   + (thumbRect.border.width + bs["thumbnail-padding"]*dp) * 2
    implicitHeight: thumbImage.sourceSize.height
                    + (thumbRect.border.width + bs["thumbnail-padding"]*dp) * 2

    Rectangle {
        id: thumbRect
        anchors.fill: parent
        color: bs["thumbnail-bg"]
        border.width: 1*dp; border.color: bs["thumbnail-border"]
        radius: thumbnail.round ? bs["thumbnail-border-radius"]*dp : 0

        Image {
            id: thumbImage
            anchors.fill: parent; anchors.margins: bs["thumbnail-padding"]
        }
    }
}
