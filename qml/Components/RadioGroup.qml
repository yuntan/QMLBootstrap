import QtQuick 2.2

/* RadioGroup
 * \qml
 *   RadioGropu { id: rGroup }
 *   Radio {
 *     checked: false
 *     text: "Radio1"
 *     group: rGroup
 *   }
 * \endqml
 */
QtObject {
    id: radioGroup
    property var _radios
    property int _checkedIndex: -1

    function add(r) {
        if(typeof _radios == 'undefined') { _radios = new Array(0) }
        _radios.push(r)
        if(r.checked && _checkedIndex === -1) {
            _checkedIndex = _radios.length - 1
            console.debug(_checkedIndex)
        }
        else {
            r.checked = false
        }
    }

    function update() {
        for(var i = 0; i < _radios.length; i++) {
            if(_radios[i].checked && i !== _checkedIndex) {
                _radios[_checkedIndex].checked = false
                _checkedIndex = i
                return
            }
        }
    }
}
