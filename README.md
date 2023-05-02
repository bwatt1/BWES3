<h1> BWES3 - BW Electric Skateboard Rev3 </h1>

This is the third revision of the BW Electric Skateboard project. This revision begun on 02/05/2023 with the key change being a completely fresh ESC built from scratch. Replacing the VESC will be a challenging task as previous revisions have relied on its ease of implementation and large support network of the open source system. A key drive for the new ESC is the ability to expand the capabilities of the board and add key features to improve the experience of using the board.

The VESC fundamentals will be replaced by two separate components, an Arduino UNO R3 to serve as the microcontroller, and a custom PCB gate driver system to drive the BLDC motor. Using the Arduino allows the inclusion of 'add-ons' to enhance the board.

<h1> Planned changes </h1>

<h2> RC transceivers </h2>

A new RC comms setup will be implemented to allow for a whole new RC remote to communicate with the board. This new remote will include a screen to display relevant live riding info such as speed and temperatures. It will also feature buttons to allow control of a new lighting system being implemented also.

<h2> Lighting </h2>

A major design change will include a lighting system featuring 2 headlights and 1-2 taillights to improve safety when riding in the evening and to help tie the board in with developing regulations on e-scooters in the UK. These lights will likely be mounted via the truck mounts, with an bracket sitting underneath the truck flange to fix the lights in the correct locations.

<h2> GPS </h2>

A new GPS module will be connected to the Arduino to pair the ride data such as speed, current, temperature, power, torque etc. with a location for better ride tracking and post-analysis of data.

<h2> SD logger </h2>

An SD logging module will connect to the Arduino to capture the GPS and ride information on an SD or MicroSD card. This will be a sufficient data capture technique to export data to a PC without the complexity of implementing a Bluetooth or WiFi based upload system.

