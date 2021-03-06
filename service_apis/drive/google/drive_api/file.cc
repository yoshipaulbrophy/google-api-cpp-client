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
//   Drive API (drive/v2)
// Description:
//   Manages files in Drive including uploading, downloading, searching, detecting changes, and updating sharing permissions.
// Classes:
//   File
// Documentation:
//   https://developers.google.com/drive/

#include "google/drive_api/file.h"
#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/drive_api/parent_reference.h"
#include "google/drive_api/permission.h"
#include "google/drive_api/property.h"
#include "google/drive_api/user.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_drive_api {
using namespace googleapis;



// Object factory method (static).
File::FileCapabilities* File::FileCapabilities::New() {
  return new client::JsonCppCapsule<FileCapabilities>;
}

// Standard immutable constructor.
File::FileCapabilities::FileCapabilities(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
File::FileCapabilities::FileCapabilities(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
File::FileCapabilities::~FileCapabilities() {
}

// Properties.


// Object factory method (static).
File::FileImageMediaMetadata::FileImageMediaMetadataLocation* File::FileImageMediaMetadata::FileImageMediaMetadataLocation::New() {
  return new client::JsonCppCapsule<FileImageMediaMetadataLocation>;
}

// Standard immutable constructor.
File::FileImageMediaMetadata::FileImageMediaMetadataLocation::FileImageMediaMetadataLocation(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
File::FileImageMediaMetadata::FileImageMediaMetadataLocation::FileImageMediaMetadataLocation(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
File::FileImageMediaMetadata::FileImageMediaMetadataLocation::~FileImageMediaMetadataLocation() {
}

// Properties.
// Object factory method (static).
File::FileImageMediaMetadata* File::FileImageMediaMetadata::New() {
  return new client::JsonCppCapsule<FileImageMediaMetadata>;
}

// Standard immutable constructor.
File::FileImageMediaMetadata::FileImageMediaMetadata(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
File::FileImageMediaMetadata::FileImageMediaMetadata(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
File::FileImageMediaMetadata::~FileImageMediaMetadata() {
}

// Properties.

// Object factory method (static).
File::FileIndexableText* File::FileIndexableText::New() {
  return new client::JsonCppCapsule<FileIndexableText>;
}

// Standard immutable constructor.
File::FileIndexableText::FileIndexableText(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
File::FileIndexableText::FileIndexableText(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
File::FileIndexableText::~FileIndexableText() {
}

// Properties.

// Object factory method (static).
File::FileLabels* File::FileLabels::New() {
  return new client::JsonCppCapsule<FileLabels>;
}

// Standard immutable constructor.
File::FileLabels::FileLabels(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
File::FileLabels::FileLabels(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
File::FileLabels::~FileLabels() {
}

// Properties.

// Object factory method (static).
File::FileThumbnail* File::FileThumbnail::New() {
  return new client::JsonCppCapsule<FileThumbnail>;
}

// Standard immutable constructor.
File::FileThumbnail::FileThumbnail(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
File::FileThumbnail::FileThumbnail(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
File::FileThumbnail::~FileThumbnail() {
}

// Properties.

// Object factory method (static).
File::FileVideoMediaMetadata* File::FileVideoMediaMetadata::New() {
  return new client::JsonCppCapsule<FileVideoMediaMetadata>;
}

// Standard immutable constructor.
File::FileVideoMediaMetadata::FileVideoMediaMetadata(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
File::FileVideoMediaMetadata::FileVideoMediaMetadata(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
File::FileVideoMediaMetadata::~FileVideoMediaMetadata() {
}

// Properties.
// Object factory method (static).
File* File::New() {
  return new client::JsonCppCapsule<File>;
}

// Standard immutable constructor.
File::File(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
File::File(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
File::~File() {
}

// Properties.

const User File::get_last_modifying_user() const {
   const Json::Value& storage = Storage("lastModifyingUser");
   return client::JsonValueToCppValueHelper<User >(storage);
}

User File::mutable_lastModifyingUser() {
  Json::Value* storage = MutableStorage("lastModifyingUser");
  return client::JsonValueToMutableCppValueHelper<User >(storage);
}

const client::JsonCppArray<User > File::get_owners() const {
   const Json::Value& storage = Storage("owners");
   return client::JsonValueToCppValueHelper<client::JsonCppArray<User > >(storage);
}

client::JsonCppArray<User > File::mutable_owners() {
  Json::Value* storage = MutableStorage("owners");
  return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<User > >(storage);
}

const client::JsonCppArray<ParentReference > File::get_parents() const {
   const Json::Value& storage = Storage("parents");
   return client::JsonValueToCppValueHelper<client::JsonCppArray<ParentReference > >(storage);
}

client::JsonCppArray<ParentReference > File::mutable_parents() {
  Json::Value* storage = MutableStorage("parents");
  return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<ParentReference > >(storage);
}

const client::JsonCppArray<Permission > File::get_permissions() const {
   const Json::Value& storage = Storage("permissions");
   return client::JsonValueToCppValueHelper<client::JsonCppArray<Permission > >(storage);
}

client::JsonCppArray<Permission > File::mutable_permissions() {
  Json::Value* storage = MutableStorage("permissions");
  return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<Permission > >(storage);
}

const client::JsonCppArray<Property > File::get_properties() const {
   const Json::Value& storage = Storage("properties");
   return client::JsonValueToCppValueHelper<client::JsonCppArray<Property > >(storage);
}

client::JsonCppArray<Property > File::mutable_properties() {
  Json::Value* storage = MutableStorage("properties");
  return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<Property > >(storage);
}

const User File::get_sharing_user() const {
   const Json::Value& storage = Storage("sharingUser");
   return client::JsonValueToCppValueHelper<User >(storage);
}

User File::mutable_sharingUser() {
  Json::Value* storage = MutableStorage("sharingUser");
  return client::JsonValueToMutableCppValueHelper<User >(storage);
}

const User File::get_trashing_user() const {
   const Json::Value& storage = Storage("trashingUser");
   return client::JsonValueToCppValueHelper<User >(storage);
}

User File::mutable_trashingUser() {
  Json::Value* storage = MutableStorage("trashingUser");
  return client::JsonValueToMutableCppValueHelper<User >(storage);
}

const Permission File::get_user_permission() const {
   const Json::Value& storage = Storage("userPermission");
   return client::JsonValueToCppValueHelper<Permission >(storage);
}

Permission File::mutable_userPermission() {
  Json::Value* storage = MutableStorage("userPermission");
  return client::JsonValueToMutableCppValueHelper<Permission >(storage);
}
}  // namespace google_drive_api
