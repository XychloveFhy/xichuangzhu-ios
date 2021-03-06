//
//  XCZQuote.h
//  xcz
//
//  Created by 刘志鹏 on 14-7-5.
//  Copyright (c) 2014年 Zhipeng Liu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XCZQuote : NSObject

@property (nonatomic) int id;
@property (nonatomic, strong) NSString *quote;
@property (nonatomic) int authorId;
@property (nonatomic, strong) NSString *author;
@property (nonatomic) int workId;
@property (nonatomic, strong) NSString *work;
@property (nonatomic, strong) NSArray *pieces;

+ (XCZQuote *)getRandomQuote;
+ (XCZQuote *)getRandomQuoteExcept:(NSArray *)quoteIds;
+ (XCZQuote *)getRandomQuoteByAuthorId:(int)authorId;
+ (NSArray *)getAll;
+ (NSArray *)getByAuthorId:(int)authorId;
+ (NSArray *)getByWorkId:(int)workId;
+ (NSMutableArray *)getRandomQuotes:(int)number;

@end
