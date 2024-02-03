import { selectedCheckboxesJSON } from './devices.js';
import { isDeviceSelected } from './dashboard.js';

const shutdownBtnElem = document.querySelector('#btnShutdown');
shutdownBtnElem.addEventListener('click', async (e) => {
  console.log(selectedCheckboxesJSON);
  console.log(isDeviceSelected);

  if(isDeviceSelected) {
    const response = await fetch('/shutdown', {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json'
      },
      body: JSON.stringify({_id: selectedCheckboxesJSON})
    });
  }
});