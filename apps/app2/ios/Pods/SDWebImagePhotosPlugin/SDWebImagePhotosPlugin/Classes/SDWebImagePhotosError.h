/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSErrorDomain const SDWebImagePhotosErrorDomain;

typedef NS_ERROR_ENUM(SDWebImagePhotosErrorDomain, SDWebImagePhotosError) {
    SDWebImagePhotosErrorInvalidURL = 10000, // Photos URL is nil or not valid
    SDWebImagePhotosErrorNotAuthorized = 10001, // Photos framework access is not authorized by user
    SDWebImagePhotosErrorNotImageAsset = 10002 // Photos URL is not image asset type (like Video or Audio)
};
