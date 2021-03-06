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
// Generated from:
//   Version: v3
//   Revision: 20170130
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.4
#ifndef  GOOGLE_YOUTUBE_API_VIDEO_PROCESSING_DETAILS_PROCESSING_PROGRESS_H_
#define  GOOGLE_YOUTUBE_API_VIDEO_PROCESSING_DETAILS_PROCESSING_PROGRESS_H_

#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Video processing progress and completion time estimate.
 *
 * @ingroup DataObject
 */
class VideoProcessingDetailsProcessingProgress : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static VideoProcessingDetailsProcessingProgress* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoProcessingDetailsProcessingProgress(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoProcessingDetailsProcessingProgress(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~VideoProcessingDetailsProcessingProgress();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return
   * <code>google_youtube_api::VideoProcessingDetailsProcessingProgress</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::VideoProcessingDetailsProcessingProgress");
  }

  /**
   * Determine if the '<code>partsProcessed</code>' attribute was set.
   *
   * @return true if the '<code>partsProcessed</code>' attribute was set.
   */
  bool has_parts_processed() const {
    return Storage().isMember("partsProcessed");
  }

  /**
   * Clears the '<code>partsProcessed</code>' attribute.
   */
  void clear_parts_processed() {
    MutableStorage()->removeMember("partsProcessed");
  }


  /**
   * Get the value of the '<code>partsProcessed</code>' attribute.
   */
  uint64 get_parts_processed() const {
    const Json::Value& storage = Storage("partsProcessed");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>partsProcessed</code>' attribute.
   *
   * The number of parts of the video that YouTube has already processed. You
   * can estimate the percentage of the video that YouTube has already processed
   * by calculating:
   * 100 * parts_processed / parts_total
   *
   * Note that since the estimated number of parts could increase without a
   * corresponding increase in the number of parts that have already been
   * processed, it is possible that the calculated progress could periodically
   * decrease while YouTube processes a video.
   *
   * @param[in] value The new value.
   */
  void set_parts_processed(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("partsProcessed"));
  }

  /**
   * Determine if the '<code>partsTotal</code>' attribute was set.
   *
   * @return true if the '<code>partsTotal</code>' attribute was set.
   */
  bool has_parts_total() const {
    return Storage().isMember("partsTotal");
  }

  /**
   * Clears the '<code>partsTotal</code>' attribute.
   */
  void clear_parts_total() {
    MutableStorage()->removeMember("partsTotal");
  }


  /**
   * Get the value of the '<code>partsTotal</code>' attribute.
   */
  uint64 get_parts_total() const {
    const Json::Value& storage = Storage("partsTotal");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>partsTotal</code>' attribute.
   *
   * An estimate of the total number of parts that need to be processed for the
   * video. The number may be updated with more precise estimates while YouTube
   * processes the video.
   *
   * @param[in] value The new value.
   */
  void set_parts_total(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("partsTotal"));
  }

  /**
   * Determine if the '<code>timeLeftMs</code>' attribute was set.
   *
   * @return true if the '<code>timeLeftMs</code>' attribute was set.
   */
  bool has_time_left_ms() const {
    return Storage().isMember("timeLeftMs");
  }

  /**
   * Clears the '<code>timeLeftMs</code>' attribute.
   */
  void clear_time_left_ms() {
    MutableStorage()->removeMember("timeLeftMs");
  }


  /**
   * Get the value of the '<code>timeLeftMs</code>' attribute.
   */
  uint64 get_time_left_ms() const {
    const Json::Value& storage = Storage("timeLeftMs");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>timeLeftMs</code>' attribute.
   *
   * An estimate of the amount of time, in millseconds, that YouTube needs to
   * finish processing the video.
   *
   * @param[in] value The new value.
   */
  void set_time_left_ms(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("timeLeftMs"));
  }

 private:
  void operator=(const VideoProcessingDetailsProcessingProgress&);
};  // VideoProcessingDetailsProcessingProgress
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_VIDEO_PROCESSING_DETAILS_PROCESSING_PROGRESS_H_
