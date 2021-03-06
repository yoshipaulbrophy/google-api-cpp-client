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
//   LiveChatMessageListResponse
// Documentation:
//   https://developers.google.com/youtube/v3

#include "google/youtube_api/live_chat_message_list_response.h"
#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/live_chat_message.h"
#include "google/youtube_api/page_info.h"
#include "google/youtube_api/token_pagination.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_youtube_api {
using namespace googleapis;


// Object factory method (static).
LiveChatMessageListResponse* LiveChatMessageListResponse::New() {
  return new client::JsonCppCapsule<LiveChatMessageListResponse>;
}

// Standard immutable constructor.
LiveChatMessageListResponse::LiveChatMessageListResponse(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
LiveChatMessageListResponse::LiveChatMessageListResponse(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
LiveChatMessageListResponse::~LiveChatMessageListResponse() {
}

// Properties.

const client::JsonCppArray<LiveChatMessage > LiveChatMessageListResponse::get_items() const {
   const Json::Value& storage = Storage("items");
   return client::JsonValueToCppValueHelper<client::JsonCppArray<LiveChatMessage > >(storage);
}

client::JsonCppArray<LiveChatMessage > LiveChatMessageListResponse::mutable_items() {
  Json::Value* storage = MutableStorage("items");
  return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<LiveChatMessage > >(storage);
}

const PageInfo LiveChatMessageListResponse::get_page_info() const {
   const Json::Value& storage = Storage("pageInfo");
   return client::JsonValueToCppValueHelper<PageInfo >(storage);
}

PageInfo LiveChatMessageListResponse::mutable_pageInfo() {
  Json::Value* storage = MutableStorage("pageInfo");
  return client::JsonValueToMutableCppValueHelper<PageInfo >(storage);
}

const TokenPagination LiveChatMessageListResponse::get_token_pagination() const {
   const Json::Value& storage = Storage("tokenPagination");
   return client::JsonValueToCppValueHelper<TokenPagination >(storage);
}

TokenPagination LiveChatMessageListResponse::mutable_tokenPagination() {
  Json::Value* storage = MutableStorage("tokenPagination");
  return client::JsonValueToMutableCppValueHelper<TokenPagination >(storage);
}
}  // namespace google_youtube_api
