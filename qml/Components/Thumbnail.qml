import QtQuick 2.2

/* Thumbnail - Image with border
 * property string source
 * property bool round
 *          Whether button should have rounded corner.
 *
 * Thumbnail {
 *   source: "sample.png"
 *   round: false
 * }
 */
Item {
    id: thumbnail

    property bool round: true

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
                   + (thumbRect.border.width + bs["thumbnail-padding"]*dp) * 2
    implicitHeight: interImage.sourceSize.height
                    + (thumbRect.border.width + bs["thumbnail-padding"]*dp) * 2

    Rectangle {
        id: thumbRect
        anchors.fill: parent
        color: bs["thumbnail-bg"]
        border.width: 1*dp; border.color: bs["thumbnail-border"]
        radius: thumbnail.round ? bs["thumbnail-border-radius"]*dp : 0

        Image {
            id: interImage
            anchors.fill: parent; anchors.margins: bs["thumbnail-padding"]
        }
    }
}
