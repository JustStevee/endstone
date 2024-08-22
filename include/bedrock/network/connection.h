// Copyright (c) 2024, The Endstone Project. (https://endstone.dev) All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

class Connection {
public:
    enum class DisconnectFailReason {
        Unknown = 0,
        CantConnectNoInternet = 1,
        NoPermissions = 2,
        UnrecoverableError = 3,
        ThirdPartyBlocked = 4,
        ThirdPartyNoInternet = 5,
        ThirdPartyBadIP = 6,
        ThirdPartyNoServerOrServerLocked = 7,
        VersionMismatch = 8,
        SkinIssue = 9,
        InviteSessionNotFound = 10,
        EduLevelSettingsMissing = 11,
        LocalServerNotFound = 12,
        LegacyDisconnect = 13,
        UserLeaveGameAttempted = 14,
        PlatformLockedSkinsError = 15,
        RealmsWorldUnassigned = 16,
        RealmsServerCantConnect = 17,
        RealmsServerHidden = 18,
        RealmsServerDisabledBeta = 19,
        RealmsServerDisabled = 20,
        CrossPlatformDisabled = 21,
        CantConnect = 22,
        SessionNotFound = 23,
        ClientSettingsIncompatibleWithServer = 24,
        ServerFull = 25,
        InvalidPlatformSkin = 26,
        EditionVersionMismatch = 27,
        EditionMismatch = 28,
        LevelNewerThanExeVersion = 29,
        NoFailOccurred = 30,
        BannedSkin = 31,
        Timeout = 32,
        ServerNotFound = 33,
        OutdatedServer = 34,
        OutdatedClient = 35,
        NoPremiumPlatform = 36,
        MultiplayerDisabled = 37,
        NoWiFi = 38,
        WorldCorruption = 39,
        NoReason = 40,
        Disconnected = 41,
        InvalidPlayer = 42,
        LoggedInOtherLocation = 43,
        ServerIdConflict = 44,
        NotAllowed = 45,
        NotAuthenticated = 46,
        InvalidTenant = 47,
        UnknownPacket = 48,
        UnexpectedPacket = 49,
        InvalidCommandRequestPacket = 50,
        HostSuspended = 51,
        LoginPacketNoRequest = 52,
        LoginPacketNoCert = 53,
        MissingClient = 54,
        Kicked = 55,
        KickedForExploit = 56,
        KickedForIdle = 57,
        ResourcePackProblem = 58,
        IncompatiblePack = 59,
        OutOfStorage = 60,
        InvalidLevel = 61,
        DisconnectPacket_DEPRECATED = 62,
        BlockMismatch = 63,
        InvalidHeights = 64,
        InvalidWidths = 65,
        ConnectionLost = 66,
        ZombieConnection = 67,
        Shutdown = 68,
        ReasonNotSet_DEPRECATED = 69,
        LoadingStateTimeout = 70,
        ResourcePackLoadingFailed = 71,
        SearchingForSessionLoadingScreenFailed = 72,
        NetherNetProtocolVersion = 73,
        SubsystemStatusError = 74,
        EmptyAuthFromDiscovery = 75,
        EmptyUrlFromDiscovery = 76,
        ExpiredAuthFromDiscovery = 77,
        UnknownSignalServiceSignInFailure = 78,
        XBLJoinLobbyFailure = 79,
        UnspecifiedClientInstanceDisconnection = 80,
        NetherNetSessionNotFound = 81,
        NetherNetCreatePeerConnection = 82,
        NetherNetICE = 83,
        NetherNetConnectRequest = 84,
        NetherNetConnectResponse = 85,
        NetherNetNegotiationTimeout = 86,
        NetherNetInactivityTimeout = 87,
        StaleConnectionBeingReplaced = 88,
        RealmsSessionNotFound_DEPRECATED = 89,
        BadPacket = 90,
        NetherNetFailedToCreateOffer = 91,
        NetherNetFailedToCreateAnswer = 92,
        NetherNetFailedToSetLocalDescription = 93,
        NetherNetFailedToSetRemoteDescription = 94,
        NetherNetNegotiationTimeoutWaitingForResponse = 95,
        NetherNetNegotiationTimeoutWaitingForAccept = 96,
        NetherNetIncomingConnectionIgnored = 97,
        NetherNetSignalingParsingFailure = 98,
        NetherNetSignalingUnknownError = 99,
        NetherNetSignalingUnicastDeliveryFailed = 100,
        NetherNetSignalingBroadcastDeliveryFailed = 101,
        NetherNetSignalingGenericDeliveryFailed = 102,
        EditorMismatchEditorWorld = 103,
        EditorMismatchVanillaWorld = 104,
        WorldTransferNotPrimaryClient = 105,
        RequestServerShutdown = 106,
        ClientGameSetupCancelled = 107,
        ClientGameSetupFailed = 108,
        NoVenue = 109,
        NetherNetSignalingSigninFailed = 110,
        SessionAccessDenied = 111,
        ServiceSigninIssue = 112,
        NetherNetNoSignalingChannel = 113,
        NetherNetNotLoggedIn = 114,
        NetherNetClientSignalingError = 115,
        SubClientLoginDisabled = 116,
    };
};
