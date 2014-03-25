import QtQuick 2.2

/* Radio - Bootstrap style radio form
 * \property bool checked
 * \property bool boldFont
 * \property bool enabled
 *           When it is false, form becomes unmodifyable
 *           and be slightly different look.
 * \property string text
 *           Text displayed right side of checkBox
 * \property bool readOnly
 * \property RadioGroup group
 *           Specify RadioGroup for checking only one of many.
 *
 * \qml
 *   RadioGropu { id: rGroup }
 *   Radio {
 *     checked: false
 *     text: "Radio1"
 *     group: rGroup
 *   }
 * \endqml
 */
Item {
    id: radio
    property bool checked: false
    property alias text: rdoText.text
    property bool readOnly: false
    property QtObject group

    // property alias
    property alias boldFont: rdoText.font.bold

    width: implicitWidth; height: implicitHeight
    implicitWidth: rdoIcon.width + bs["padding-base-horizontal"] + rdoText.width
    implicitHeight: bs["padding-base-vertical"]*dp * 2 + Math.max(rdoIcon.height, rdoText.height)

    onGroupChanged: group.add(radio)

    FontAwesomeIcon {
        id: rdoIcon
        anchors { left: parent.left; verticalCenter: parent.verticalCenter }
        width: implicitWidth; height: implicitHeight
        faIcon: checked ? "fa-dot-circle-o" : "fa-circle"
        fontDpSize: bs["font-size-base"]*dp
        color: enabled ? bs["input-color"] : bs["gray-lighter"]
    }

    Text {
        id: rdoText
        anchors {
            left: rdoIcon.right; leftMargin: bs["padding-base-horizontal"]
            verticalCenter: parent.verticalCenter
        }
        width: implicitWidth; height: implicitHeight
        font.pixelSize: bs["font-size-base"]*dp
        color: bs["input-color"]
    }

    MouseArea {
        anchors.centerIn: parent
        width: parent.width; height: Math.max(rdoIcon.height, rdoText.height)
        cursorShape: Qt.PointingHandCursor
        onClicked: {
            if(!readOnly && !checked) {
                checked = true
                group.update()
            }
        }
    }
}
