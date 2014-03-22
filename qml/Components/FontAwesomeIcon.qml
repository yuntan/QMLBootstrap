import QtQuick 2.2

/* FontAwesomeIcon - display FontAwesome icon
 *
 * \property string faIcon
 *           Specify FontAwesome icon's name.
 *           (ex. fa-github fa-flag)
 * \property color color
 *           Specify color (not bootstrap color name).
 * \property string size
 *           Specify bootstrap size name.
 *           (large, base, small, xsmall)
 * \property int fontDpSize
 *           Specify font dp size.
 * \property bool boldFont
 *
 * \qml
 *   FontAwesomeIcon {
 *     size: "large"
 *     boldFont: true
 *     color: "#333"
 *     faIcon: "fa-github"
 *   }
 */
Item {
    id: faItem
    property string faIcon : ""
    property alias color : innertext.color
    property string size
    property int fontDpSize: bs["font-size-base"]*dp
    property alias boldFont: innertext.font.bold
    implicitWidth: innertext.implicitWidth
    implicitHeight: innertext.implicitHeight

    Text {
        id: innertext
        text: faIcon !== "" ? faIcons[faIcon] !== undefined ? faIcons[faIcon]
                                                            : faIcons["fa-question"]
                            : ""
        font.family: "FontAwesome"
        font.pointSize: size !== undefined ? (bs["font-size-%1".arg(size)] - 4)*dp
                                           : fontPointSize
    }
}
