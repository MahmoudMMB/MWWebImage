/*
 * This file is part of the MWWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 * (c) Florent Vilmart
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <MWWebImage/MWWebImageCompat.h>

//! Project version number for MWWebImage.
FOUNDATION_EXPORT double MWWebImageVersionNumber;

//! Project version string for MWWebImage.
FOUNDATION_EXPORT const unsigned char MWWebImageVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MWWebImage/PublicHeader.h>

#import <MWWebImage/MWWebImageManager.h>
#import <MWWebImage/MWWebImageCacheKeyFilter.h>
#import <MWWebImage/MWWebImageCacheSerializer.h>
#import <MWWebImage/MWImageCacheConfig.h>
#import <MWWebImage/MWImageCache.h>
#import <MWWebImage/MWMemoryCache.h>
#import <MWWebImage/MWDiskCache.h>
#import <MWWebImage/MWImageCacheDefine.h>
#import <MWWebImage/MWImageCachesManager.h>
#import <MWWebImage/UIView+WebCache.h>
#import <MWWebImage/UIImageView+WebCache.h>
#import <MWWebImage/UIImageView+HighlightedWebCache.h>
#import <MWWebImage/MWWebImageDownloaderConfig.h>
#import <MWWebImage/MWWebImageDownloaderOperation.h>
#import <MWWebImage/MWWebImageDownloaderRequestModifier.h>
#import <MWWebImage/MWWebImageDownloaderResponseModifier.h>
#import <MWWebImage/MWWebImageDownloaderDecryptor.h>
#import <MWWebImage/MWImageLoader.h>
#import <MWWebImage/MWImageLoadersManager.h>
#import <MWWebImage/UIButton+WebCache.h>
#import <MWWebImage/MWWebImagePrefetcher.h>
#import <MWWebImage/UIView+WebCacheOperation.h>
#import <MWWebImage/UIImage+Metadata.h>
#import <MWWebImage/UIImage+MultiFormat.h>
#import <MWWebImage/UIImage+MemoryCacheCost.h>
#import <MWWebImage/UIImage+ExtendedCacheData.h>
#import <MWWebImage/MWWebImageOperation.h>
#import <MWWebImage/MWWebImageDownloader.h>
#import <MWWebImage/MWWebImageTransition.h>
#import <MWWebImage/MWWebImageIndicator.h>
#import <MWWebImage/MWImageTransformer.h>
#import <MWWebImage/UIImage+Transform.h>
#import <MWWebImage/MWAnimatedImage.h>
#import <MWWebImage/MWAnimatedImageView.h>
#import <MWWebImage/MWAnimatedImageView+WebCache.h>
#import <MWWebImage/MWAnimatedImagePlayer.h>
#import <MWWebImage/MWImageCodersManager.h>
#import <MWWebImage/MWImageCoder.h>
#import <MWWebImage/MWImageAPNGCoder.h>
#import <MWWebImage/MWImageGIFCoder.h>
#import <MWWebImage/MWImageIOCoder.h>
#import <MWWebImage/MWImageFrame.h>
#import <MWWebImage/MWImageCoderHelper.h>
#import <MWWebImage/MWImageGraphics.h>
#import <MWWebImage/MWGraphicsImageRenderer.h>
#import <MWWebImage/UIImage+GIF.h>
#import <MWWebImage/UIImage+ForceDecode.h>
#import <MWWebImage/NMWata+ImageContentType.h>
#import <MWWebImage/MWWebImageDefine.h>
#import <MWWebImage/MWWebImageError.h>
#import <MWWebImage/MWWebImageOptionsProcessor.h>
#import <MWWebImage/MWImageIOAnimatedCoder.h>
#import <MWWebImage/MWImageHEICCoder.h>
#import <MWWebImage/MWImageAWebPCoder.h>

// Mac
#if __has_include(<MWWebImage/NSImage+Compatibility.h>)
#import <MWWebImage/NSImage+Compatibility.h>
#endif
#if __has_include(<MWWebImage/NSButton+WebCache.h>)
#import <MWWebImage/NSButton+WebCache.h>
#endif
#if __has_include(<MWWebImage/MWAnimatedImageRep.h>)
#import <MWWebImage/MWAnimatedImageRep.h>
#endif

// MapKit
#if __has_include(<MWWebImage/MKAnnotationView+WebCache.h>)
#import <MWWebImage/MKAnnotationView+WebCache.h>
#endif
