// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Description:
//   Supports core YouTube features, such as uploading videos, creating and managing playlists, searching for content, and much more.
// Classes:
//   LiveChatUserBannedMessageDetails
// Documentation:
//   https://developers.google.com/youtube/v3

#include "google/youtube_api/live_chat_user_banned_message_details.h"
#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/channel_profile_details.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_youtube_api {
using namespace googleapis;


// Object factory method (static).
LiveChatUserBannedMessageDetails* LiveChatUserBannedMessageDetails::New() {
  return new client::JsonCppCapsule<LiveChatUserBannedMessageDetails>;
}

// Standard immutable constructor.
LiveChatUserBannedMessageDetails::LiveChatUserBannedMessageDetails(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
LiveChatUserBannedMessageDetails::LiveChatUserBannedMessageDetails(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
LiveChatUserBannedMessageDetails::~LiveChatUserBannedMessageDetails() {
}

// Properties.

const ChannelProfileDetails LiveChatUserBannedMessageDetails::get_banned_user_details() const {
   const Json::Value& storage = Storage("bannedUserDetails");
   return client::JsonValueToCppValueHelper<ChannelProfileDetails >(storage);
}

ChannelProfileDetails LiveChatUserBannedMessageDetails::mutable_bannedUserDetails() {
  Json::Value* storage = MutableStorage("bannedUserDetails");
  return client::JsonValueToMutableCppValueHelper<ChannelProfileDetails >(storage);
}
}  // namespace google_youtube_api
