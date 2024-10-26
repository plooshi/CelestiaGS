#pragma once

class Globals
{
public:
	// ploosh: creative doesnt work
	constexpr static bool bCreative = false;
	constexpr static string_view PlaylistName =
		"/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo";
	// internally this is controlled in lategame.h's LateGameInternal::operator bool(), you can add some logic to only activate lategame after some amount of players 
	constexpr static bool bLateGame = false;
};