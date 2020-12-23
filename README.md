# sd9-wav
sd9-wav (Well... SD9-to-WAV) is a simple converter that converts a sd9 file to wav. The format is very simple. It is simply a WAV file with 0x20 (32 bytes) of additional data added onto the front of the file. Because of this, it is as simple as chopping those first few bytes off and it will read properly as a WAV file.

### About sd9 files

sd9 files are typically in Beatmania IIDX games. The ones tested for this program were Beatmania IIDX 26 Rootage and Beatmania IIDX 27 Heroic Verse.