// Copyright 2010 Google Inc.
//
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
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_YOUTUBE_API_VIDEO_STATISTICS_H_
#define  GOOGLE_YOUTUBE_API_VIDEO_STATISTICS_H_

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
 * Statistics about the video, such as the number of times the video was viewed
 * or liked.
 *
 * @ingroup DataObject
 */
class VideoStatistics : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static VideoStatistics* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoStatistics(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoStatistics(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~VideoStatistics();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::VideoStatistics</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::VideoStatistics");
  }

  /**
   * Determine if the '<code>commentCount</code>' attribute was set.
   *
   * @return true if the '<code>commentCount</code>' attribute was set.
   */
  bool has_comment_count() const {
    return Storage().isMember("commentCount");
  }

  /**
   * Clears the '<code>commentCount</code>' attribute.
   */
  void clear_comment_count() {
    MutableStorage()->removeMember("commentCount");
  }


  /**
   * Get the value of the '<code>commentCount</code>' attribute.
   */
  uint64 get_comment_count() const {
    const Json::Value& storage = Storage("commentCount");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>commentCount</code>' attribute.
   *
   * The number of comments for the video.
   *
   * @param[in] value The new value.
   */
  void set_comment_count(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("commentCount"));
  }

  /**
   * Determine if the '<code>dislikeCount</code>' attribute was set.
   *
   * @return true if the '<code>dislikeCount</code>' attribute was set.
   */
  bool has_dislike_count() const {
    return Storage().isMember("dislikeCount");
  }

  /**
   * Clears the '<code>dislikeCount</code>' attribute.
   */
  void clear_dislike_count() {
    MutableStorage()->removeMember("dislikeCount");
  }


  /**
   * Get the value of the '<code>dislikeCount</code>' attribute.
   */
  uint64 get_dislike_count() const {
    const Json::Value& storage = Storage("dislikeCount");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>dislikeCount</code>' attribute.
   *
   * The number of users who have indicated that they disliked the video by
   * giving it a negative rating.
   *
   * @param[in] value The new value.
   */
  void set_dislike_count(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("dislikeCount"));
  }

  /**
   * Determine if the '<code>favoriteCount</code>' attribute was set.
   *
   * @return true if the '<code>favoriteCount</code>' attribute was set.
   */
  bool has_favorite_count() const {
    return Storage().isMember("favoriteCount");
  }

  /**
   * Clears the '<code>favoriteCount</code>' attribute.
   */
  void clear_favorite_count() {
    MutableStorage()->removeMember("favoriteCount");
  }


  /**
   * Get the value of the '<code>favoriteCount</code>' attribute.
   */
  uint64 get_favorite_count() const {
    const Json::Value& storage = Storage("favoriteCount");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>favoriteCount</code>' attribute.
   *
   * The number of users who currently have the video marked as a favorite
   * video.
   *
   * @param[in] value The new value.
   */
  void set_favorite_count(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("favoriteCount"));
  }

  /**
   * Determine if the '<code>likeCount</code>' attribute was set.
   *
   * @return true if the '<code>likeCount</code>' attribute was set.
   */
  bool has_like_count() const {
    return Storage().isMember("likeCount");
  }

  /**
   * Clears the '<code>likeCount</code>' attribute.
   */
  void clear_like_count() {
    MutableStorage()->removeMember("likeCount");
  }


  /**
   * Get the value of the '<code>likeCount</code>' attribute.
   */
  uint64 get_like_count() const {
    const Json::Value& storage = Storage("likeCount");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>likeCount</code>' attribute.
   *
   * The number of users who have indicated that they liked the video by giving
   * it a positive rating.
   *
   * @param[in] value The new value.
   */
  void set_like_count(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("likeCount"));
  }

  /**
   * Determine if the '<code>viewCount</code>' attribute was set.
   *
   * @return true if the '<code>viewCount</code>' attribute was set.
   */
  bool has_view_count() const {
    return Storage().isMember("viewCount");
  }

  /**
   * Clears the '<code>viewCount</code>' attribute.
   */
  void clear_view_count() {
    MutableStorage()->removeMember("viewCount");
  }


  /**
   * Get the value of the '<code>viewCount</code>' attribute.
   */
  uint64 get_view_count() const {
    const Json::Value& storage = Storage("viewCount");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>viewCount</code>' attribute.
   *
   * The number of times the video has been viewed.
   *
   * @param[in] value The new value.
   */
  void set_view_count(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("viewCount"));
  }

 private:
  void operator=(const VideoStatistics&);
};  // VideoStatistics
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_VIDEO_STATISTICS_H_
