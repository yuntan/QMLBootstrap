import QtQuick 2.2

/* CheckBox - Bootstrap style checkbox form
 * \property bool checked
 * \property bool boldFont
 * \property bool enabled
 *           When it is false, form becomes unmodifyable
 *           and be slightly different look.
 * \property string text
 *           Text displayed right side of checkBox
 * \property bool readOnly
 *
 * \qml
 *   CheckBox {
 *     checked: true
 *     text: "Check me!"
 *   }
 * \endqml
 */
Item {
    id: checkBox
    property bool checked: false
    property alias text: chkText.text
    property bool readOnly: false

    // property alias
    property alias boldFont: chkText.font.bold

    width: implicitWidth; height: implicitHeight
    implicitWidth: chkIcon.width + bs["padding-base-horizontal"] + chkText.width
    implicitHeight: bs["padding-base-vertical"]*dp * 2 + Math.max(chkIcon.height, chkText.height)

    FontAwesomeIcon {
        id: chkIcon
        anchors { left: parent.left; verticalCenter: parent.verticalCenter }
        width: implicitWidth; height: implicitHeight
        faIcon: checked ? "fa-check-square" : "fa-square"
        fontDpSize: bs["font-size-base"]*dp
        color: enabled ? bs["input-color"] : bs["gray-lighter"]
    }

    Text {
        id: chkText
        anchors {
            left: chkIcon.right; leftMargin: bs["padding-base-horizontal"]
            verticalCenter: parent.verticalCenter
        }
        width: implicitWidth; height: implicitHeight
        font.pixelSize: bs["font-size-base"]*dp
        color: bs["input-color"]
    }

    MouseArea {
        anchors.centerIn: parent
        width: parent.width; height: Math.max(chkIcon.height, chkText.height)
        cursorShape: Qt.PointingHandCursor
        onClicked: !checkBox.readOnly ? checked = !checked : "do nothing"
    }
}
