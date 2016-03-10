//
//  UIImageView+WTImageCache.h
//  WTRequestCenter
//
//  Created by song on 14-7-19.
//  Copyright (c) Mike song(mailto:275712575@qq.com). All rights reserved.
//  site:https://github.com/swtlovewtt/WTRequestCenter

/*
 这是一个方便的缓存式网络请求的缓存库，在网络不好
 或者没有网络的情况下方便读取缓存来看。
 
 使用方法很简单，只需要传URL和参数就可以了。

 还提供上传图片功能，下载图片功能，缓存图片功能
 还有JSON解析功能，还提供来一个URL的表让你来填写
 然后直接快捷取URL。
 希望能帮到你，谢谢。
 如果有任何问题可以在github上向我提出
 Mike
 
 */

@import UIKit;

/*
    方便的图片缓存功能
 */
@interface UIImageView (ImageCache)

- (void)setImageWithURL:(NSString*)url;
//下载图片＋placeholder
- (void)setImageWithURL:(NSString*)url
       placeholderImage:(UIImage *)placeholder;

/*!
    下载图片,用于table的cell重用不会产生问题
 */
-(void)setImageWithURL:(NSString *)url placeholderImage:(UIImage *)placeholder finished:(dispatch_block_t)finished failed:(void(^)(NSError*error))failed;



@end

@interface UIImageView(highlightedImageCache)
//设置高亮图
-(void)setHighlightedImageWithURL:(NSString *)url;

-(void)setHighlightedImageWithURL:(NSString *)url
                 placeholderImage:(UIImage*)placeholderImage;

-(void)setHighlightedImageWithURL:(NSString *)url
                 placeholderImage:(UIImage*)placeholderImage
                         finished:(dispatch_block_t)finished
                           failed:(dispatch_block_t)failed;
@end
@interface UIImageView(Gif)
-(void)setGifWithURL:(NSString*)url;
@end
