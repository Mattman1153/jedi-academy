// Copyright (C) 2003 - 2007 - Michael J. Nohai
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of agreement written in the JAE Mod Source.doc.
// See JKA Game Source License.htm for legal information with Raven Software.
// Use this code at your own risk.

#ifndef __G_CVARS_H__
#define __G_CVARS_H__

#define AUTHOR "Michael J. Nohai"

/*
#ifdef __linux__
#define RAND_MAX 2147483647
#endif
*/

// MJN - Cvars
// Saber Damage
vmCvar_t	g_mSaberDMGIdle;
vmCvar_t	g_mSaberDMGThrow;

vmCvar_t	g_mSaberDMGTwirl;
vmCvar_t	g_mSaberDMGTwirlAmplifier;
vmCvar_t	g_mSaberDMGKick;
vmCvar_t	g_mSaberDMGDualKata;
vmCvar_t	g_mSaberDMGStaffKataMin;
vmCvar_t	g_mSaberDMGStaffKataMax;
vmCvar_t	g_mSaberDMGMultiMin;
vmCvar_t	g_mSaberDMGMultiMax;
vmCvar_t	g_mSaberDMGSpecialMin;
vmCvar_t	g_mSaberDMGSpecialMax;
vmCvar_t	g_mSaberDMGRedNormal;
vmCvar_t	g_mSaberDMGRedNormalMin;
vmCvar_t	g_mSaberDMGRedNormalMax;
vmCvar_t	g_mSaberDMGRedDFAMin;
vmCvar_t	g_mSaberDMGRedDFAMax;
vmCvar_t	g_mSaberDMGRedBackMin;
vmCvar_t	g_mSaberDMGRedBackMax;
vmCvar_t	g_mSaberDMGRedDFAAmplifier;
vmCvar_t	g_mSaberDMGYellowNormal;
vmCvar_t	g_mSaberDMGYellowOverheadMin;
vmCvar_t	g_mSaberDMGYellowOverheadMax;
vmCvar_t	g_mSaberDMGYellowBackMin;
vmCvar_t	g_mSaberDMGYellowBackMax;
vmCvar_t	g_mSaberDMGYellowOverheadAmplifier;
vmCvar_t	g_mSaberDMGBlueNormal;
vmCvar_t	g_mSaberDMGBlueLungeMin;
vmCvar_t	g_mSaberDMGBlueLungeMax;
vmCvar_t	g_mSaberDMGBlueBackMin;
vmCvar_t	g_mSaberDMGBlueBackMax;
vmCvar_t	g_mSaberDMGBlueLungeAmplifier;
vmCvar_t	g_mSaberDMGAutoAmplifier;

// Motd
vmCvar_t	g_mMOTDShowTime;
vmCvar_t	g_mMOTDContents;
// Welcome Message
vmCvar_t	g_mWelcomeMessage;
// Help Info
vmCvar_t	g_mHelpInfo;
// Admin Gun
vmCvar_t	g_mAdminGun;
// Allows rcon to give admin to anyone without pass
vmCvar_t	g_mGiveAdmin;
// Secondary Admin password
vmCvar_t	g_mAdminPassword;
vmCvar_t	g_mKnightPassword;
// Allow secondary admins
vmCvar_t	g_mAllowAdminLogin;
// Allow secondary admins to login via password at connection
vmCvar_t	g_mAdminLoginControl;
// Allow certain Admin/Knight Commands
vmCvar_t	g_mAdminCommands;
vmCvar_t	g_mKnightCommands;
// Allow certain Emotes
vmCvar_t	g_mEmotes;
// Logged in/Not Logged in Messages
vmCvar_t	g_mLoggedInAdmin;
vmCvar_t	g_mNotLoggedInAdmin;
vmCvar_t	g_mLoggedInKnight;
// Duel Stats
vmCvar_t	g_mDuelStats;
// Duel Timer
vmCvar_t	g_mDuelTimer;
vmCvar_t	g_mDuelTimerWait;
// Duel Shield
vmCvar_t	g_mPlayerDuelShield;
// 1 Duel at a Time
vmCvar_t    g_mEnforceDuel;
// No Chatting in Duel Gameplay
vmCvar_t	g_mSTFU;
// Private chat mode.
vmCvar_t	g_mPSayMode;
// Whois logged in?
vmCvar_t	g_mWhois;
// Max Warnings
vmCvar_t	g_mMaxWarnings;
// Warning Punishment
vmCvar_t	g_mWarningPunishment;
// Empowerd vs. Terminator expansion
vmCvar_t    g_mJvsT;
// Access to Empower Force ( No Force Rule  )
vmCvar_t	g_mDebugEmpower;
// Access to Terminator ( Saber Only Rule )
vmCvar_t	g_mDebugTerminator;
// Teleport during CTF and other team gameplays
vmCvar_t	g_mAllowTeleFlag;
// Allow Black Colors
vmCvar_t    g_mAllowBlack;
// Max Bots & Min Humans
vmCvar_t	g_mMinHumans;
vmCvar_t	g_mMaxBots;
vmCvar_t	g_mAllowBotLimit;
// Bacta Health
vmCvar_t	g_mNerfBacta;
// To Allow Adjustments in Small Bacta regeneration
vmCvar_t	g_mBactaHP;
// To Allow Adjustments in Big Bacta regeneration
vmCvar_t	g_mBigBactaHP;	
// Allows user to Suicide during Team gameplay
vmCvar_t	g_mAllowTeamSuicide;
// Displays the rank name for each person
vmCvar_t	g_mRankName;
vmCvar_t	g_mRankName2;
vmCvar_t	g_mRankDisplay;
// To Allow / Disallow Emotes in FFA
vmCvar_t	g_mAllowEmotes;
// To Enable / Disable Center screen printing of Admin command executions.
vmCvar_t	g_mScreenSpam;
// To Enable / Disable Private Duels in Team games.
vmCvar_t	g_mAllowTeamDuel;
vmCvar_t	g_mNoAdminFollow;
vmCvar_t	g_mDuelForce;
// The ban file location and name.
vmCvar_t	g_mBanFile;
// Max connections allowed
vmCvar_t	sv_maxConnections;

// Chat color cvars
vmCvar_t	g_mASayColor;
vmCvar_t	g_mSayChatColor;
vmCvar_t	g_mTeamChatColor;
vmCvar_t	g_mTellChatColor;
// Slap
vmCvar_t	g_mSlapPowerXY;
vmCvar_t	g_mSlapPowerZ;
vmCvar_t	g_mSlapKnockDownTime;
vmCvar_t	g_mMessageSlapTarget;
vmCvar_t	g_mMessageSlapBroadcast;
vmCvar_t	g_mMessageSlapEveryone;
// Silence
vmCvar_t	g_mMessageSilenceTarget;
vmCvar_t	g_mMessageSilenceBroadcast;
vmCvar_t	g_mMessageSilenceEveryone;
// UnSilence
vmCvar_t	g_mMessageUnSilenceTarget;
vmCvar_t	g_mMessageUnSilenceBroadcast;
vmCvar_t	g_mMessageUnSilenceEveryone;
// Sleep
vmCvar_t	g_mMessageSleepTarget;
vmCvar_t	g_mMessageSleepBroadcast;
vmCvar_t	g_mMessageSleepEveryone;
// Wake
vmCvar_t	g_mMessageWakeTarget;
vmCvar_t	g_mMessageWakeBroadcast;
vmCvar_t	g_mMessageWakeEveryone;
// Allow Voting
vmCvar_t    g_mMessageVoteAllowTarget; 
vmCvar_t    g_mMessageVoteAllowBroadcast;
vmCvar_t    g_mMessageVoteAllowEveryone;
// Deny Voting
vmCvar_t    g_mMessageVoteDenyTarget; 
vmCvar_t    g_mMessageVoteDenyBroadcast;
vmCvar_t    g_mMessageVoteDenyEveryone;
// Force Team
vmCvar_t    g_mMessageForceTeamTarget; 
vmCvar_t    g_mMessageForceTeamBroadcast;
vmCvar_t    g_mMessageForceTeamEveryone;
// Teleporting
vmCvar_t    g_mMessageTeleTarget; 
vmCvar_t    g_mMessageTeleBroadcast;
vmCvar_t    g_mMessageTeleEveryone;
// Empower
vmCvar_t	g_mMessageEmpowerTarget;
vmCvar_t	g_mMessageEmpowerBroadcast;
vmCvar_t	g_mMessageEmpowerEveryone;
// UnEmpower
vmCvar_t	g_mMessageUnEmpowerTarget;
vmCvar_t	g_mMessageUnEmpowerBroadcast;
vmCvar_t	g_mMessageUnEmpowerEveryone;
// Terminator
vmCvar_t	g_mMessageTerminatorTarget;
vmCvar_t	g_mMessageTerminatorBroadcast;
vmCvar_t	g_mMessageTerminatorEveryone;
// UnTerminator
vmCvar_t	g_mMessageUnTerminatorTarget;
vmCvar_t	g_mMessageUnTerminatorBroadcast;
vmCvar_t	g_mMessageUnTerminatorEveryone;
// Protect
vmCvar_t	g_mMessageProtectTarget;
vmCvar_t	g_mMessageProtectBroadcast;
vmCvar_t	g_mMessageProtectEveryone;
// UnProtect
vmCvar_t	g_mMessageUnProtectTarget;
vmCvar_t	g_mMessageUnProtectBroadcast;
vmCvar_t	g_mMessageUnProtectEveryone;
// Warning
vmCvar_t	g_mMessageWarningTarget;
vmCvar_t	g_mMessageWarningBroadcast;
vmCvar_t	g_mMessageWarningEveryone;

// Warning Kicked
vmCvar_t	g_mMessageWarningKickedTarget;
vmCvar_t	g_mMessageWarningKickedBroadcast;
vmCvar_t	g_mMessageWarningKickedEveryone;

// Warning
vmCvar_t	g_mMessageForgiveTarget;
vmCvar_t	g_mMessageForgiveBroadcast;
vmCvar_t	g_mMessageForgiveEveryone;

#endif //__G_CVARS_H__
