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

#include "bedrock/bedrock.h"
#include "bedrock/event/event_ref.h"
#include "bedrock/event/level_events.h"
#include "bedrock/event/player_events.h"

class LevelEventCoordinator {
public:
    BEDROCK_API void sendEvent(EventRef<LevelGameplayEvent<void>> const &ref);
};

class PlayerEventCoordinator {
public:
    BEDROCK_API void sendEvent(EventRef<PlayerGameplayEvent<void>> const &ref);
};
