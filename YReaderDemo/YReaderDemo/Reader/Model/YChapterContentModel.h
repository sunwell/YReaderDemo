//
//  YChapterContentModel.h
//  YReaderDemo
//
//  Created by yanxuewen on 2016/12/12.
//  Copyright © 2016年 yxw. All rights reserved.
//

#import "YBaseModel.h"

@interface YChapterContentModel : YBaseModel

@property (nonatomic, strong) NSString * body;
@property (nonatomic, strong) NSString * title;
@property (nonatomic, strong) NSString *link;
@property (nonatomic, assign) BOOL isDownload;
@property (assign, nonatomic) NSUInteger pageCount;

- (void)pagingWithBounds:(CGRect)bounds;

+ (instancetype)chapterModelWith:(NSString *)title link:(NSString *)link;

@end