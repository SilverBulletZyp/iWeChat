//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, OpenSuccItem, PopItem;

@interface OpenECardRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bindToken; // @dynamic bindToken;
@property(retain, nonatomic) PopItem *guideInfo; // @dynamic guideInfo;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *rettext; // @dynamic rettext;
@property(retain, nonatomic) OpenSuccItem *succTips; // @dynamic succTips;
@property(retain, nonatomic) NSString *verifyMsgDesc; // @dynamic verifyMsgDesc;

@end

