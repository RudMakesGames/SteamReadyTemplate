<h1 align="center">SteamReady - UE5.7 Multiplayer Template</h1>
<p align="center">
  <img src="SteamReady/Media/SteamReady_Preview.png" alt="SteamReady"/>
</p>
Skip the boilerplate.

---

SteamReady gives you Steam lobby invite & join functionality plus a full settings system (Audio, Video, Controls) so you can focus on building your game.

---

## Features
- 🎮 **Steam Lobby System** — Host and invite friends or join a random available session
- 🔊 **Audio Settings** — Master, Music, and SFX volume controls with persistent saving
- 🖥️ **Video Settings** — Resolution, window mode, and quality presets
- 🕹️ **Control Settings** — Rebindable controls with controller and keyboard support
- 💾 **Persistent Settings** — All settings are saved and loaded automatically via Save Game
- 🌐 **Multiplayer Ready** — Built with client-server architecture in mind from the ground up

---

## Requirements
- Steam running in the background for lobby functionality
- [Advanced Sessions Plugin](https://forums.unrealengine.com/t/advanced-sessions-plugin/27457) installed in your engine
- > ⚠️ This template is only compatible with **Unreal Engine 5.7**. It will not work with earlier or later versions.

---

## Installation
1. Download or clone this repository
2. Copy the `SteamReady` folder into your Unreal Engine 5.7 Templates directory:
C:\Program Files\Epic Games\UE_5.7\Templates\
3. Restart the Unreal Engine launcher
4. Create a new project and select **Steam Ready** from the template browser

---

## Configuration
Once you create a project from the template:
1. Open the project in UE 5.7
2. Set your Steam App ID in `Config/DefaultEngine.ini` under `SteamDevAppId` (Default App ID is 480)
3. Play in editor(Standalone Mode) with at least two instances to test lobby functionality in Lan (Steam must be running before you play)

---

## Known Limitations
- Lobby functionality requires Steam to be running
- `SetPause` is disabled in multiplayer — the pause menu is a local UI overlay only
- Template is not tested on versions other than UE 5.7

---

## License
This template is free to use in personal and commercial projects. No attribution required but always appreciated.

---

## Credits
- Multiplayer session handling built with the [Advanced Sessions Plugin](https://forums.unrealengine.com/t/advanced-sessions-plugin/27457) by Josh Hutchinson
- UI Design by [Crimsonal](https://www.artstation.com/crimsonal)
