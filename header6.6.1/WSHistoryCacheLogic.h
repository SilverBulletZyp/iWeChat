//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WSHistoryCacheLogic : NSObject
{
    NSMutableArray *_operationList;
}

- (void).cxx_destruct;
- (void)clearHistoryOperation;
- (id)findHistoryOperationForQuery:(id)arg1;
- (void)deleteHistoryQuery:(id)arg1;
- (void)insertLastHistoryQuery:(id)arg1;
- (id)resultJSONRepresentation:(id)arg1;
- (id)getHistoryOperationList:(unsigned int)arg1;
- (void)save;
- (id)path;
- (void)initData;
- (id)init;

@end

