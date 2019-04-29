/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <SDWebImage/SDWebImage.h>
#import <Photos/Photos.h>
#import "SDWebImagePhotosDefine.h"

// The imgae loader to load image asset from Photos library. You need to register the loader into manager firstly. Use `@import SDWebImagePhotosPlugin` to import full framework instead of each header.
// @note To control single image request options, use the context option in `SDWebImagePhotosDefine.h`.
// @note Use `NSURL+SDWebImagePhotosPlugin.h` category to create Photos URL instead of string. Use `PHImageRequestOptions+SDWebImagePhotosPlugin.h` category to provide extra info for request options.
// @note And it's also strongly recommeded to totally disable memory cache if you want to query batch of Photos images frequently. You can do this by using `SDWebImageFromLoaderOnly` options during image request. And you can use `SDWebImageContextStoreCacheType` with `SDImageCacheTypeNone` to disable cache storing. This is because Photos framework manage the image cache by their own process outside your application process and can reduce memory usage.

@interface SDWebImagePhotosLoader : NSObject <SDImageLoader>

/**
 The global shared instance for Photos loader.
 */
@property (nonatomic, class, readonly, nonnull) SDWebImagePhotosLoader *sharedLoader;

/**
 The default `fetchOptions` used for PHAsset fetch with the localIdentifier.
 Defaults to nil.
 */
@property (nonatomic, strong, nullable) PHFetchOptions *fetchOptions;

/**
 The default `imageRequestOptions` used for image asset request.
 Defatuls value are these:
 networkAccessAllowed = YES;
 resizeMode = PHImageRequestOptionsResizeModeFast;
 deliveryMode = PHImageRequestOptionsDeliveryModeOpportunistic;
 version = PHImageRequestOptionsVersionCurrent;
 */
@property (nonatomic, strong, nullable) PHImageRequestOptions *imageRequestOptions;

@end
