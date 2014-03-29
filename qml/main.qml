import QtQuick 2.2
import QtQuick.Controls 1.1 as Controls
import "Components"

Controls.ApplicationWindow {
    id: mainWindow
    title: qsTr("Hello QML Bootstrap!")

    width: 720*dp ; height: 480*dp

    Rectangle {
        anchors.fill: parent
        color: bs["body-bg"]

        //    FontAwesomeIcon {
        //        anchors.centerIn: parent
        //        faIcon: "fa-github"
        //    }

        Column {
            anchors.centerIn: parent
            spacing: 10*dp
            Button {
                size: "large"
                option: "info"
                faIcon: "fa-github"
                boldFont: true
                text: "Hello QML Bootstrap!"
                onClicked: Qt.quit()
                //            round: false
                //            enabled: false
            }

            Row {
                spacing: 5*dp
                Button {
                    //            faIcon: "fa-github"
//                    faIcon: "fa-trash-o"
                    size: "large"
                    option: "default"
                    text: "Default"
                }
                Button {
                    option: "primary"
                    text: "Primaty"
                }
                Button {
                    size: "small"
                    option: "success"
                    text: "Success"
                }
                Button {
                    size: "xsmall"
                    option: "info"
                    text: "Info"
                }
            }

            Input {
                width: 300*dp;
                placeHolderText: "Input"
                enabled: false
            }

            TextArea {
                width: 300*dp
                placeHolderText: "TextArea"
                row: 3
//                enabled: false
            }

            CheckBox {
                text: "CheckBox"
                enabled: false
            }

            Row {
                spacing: 10*dp
                RadioGroup { id: radioGroup }
                Radio { text: "Radio1"; group: radioGroup }
                Radio { text: "Radio2"; checked: true; group: radioGroup }
                Radio { text: "Radio3"; group: radioGroup }
                Radio { text: "Radio4"; group: radioGroup }
            }

            Row {
                spacing: 30*dp
                Thumbnail {
                    id: sampleImage
                    width: sourceSize.width; height: sourceSize.height
                    source: "file:///home/yuntan/Download/sample.jpg"
//                    round: false
                }
                Rectangle {
                    width: sampleImage.width; height: sampleImage.height
                    color: "#999"
                    RoundedImage {
                        id: imageShape1
                        anchors.fill: parent
                        radius: height / 2
                        source: sampleImage.source
                        Rectangle {
                            width: imageShape2.width; height: imageShape2.height
                            x: imageShape2.scopeX; y: imageShape2.scopeY
                            radius: imageShape2.radius; opacity: 0.5
                        }
                    }
                }
                ImageScope {
                    id: imageShape2
                    width: 100; height: 100; radius: height / 2
                    scopeX: 30; scopeY: 20
                    y: scopeY
                    source: sampleImage.source
                }
            }
        }
    }
}
