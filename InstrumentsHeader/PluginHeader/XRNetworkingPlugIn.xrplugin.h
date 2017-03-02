//
//  XRNetworkingPlugIn.xrplugin.h
//  MacDemo
//
//  Created by szzc on 2016/11/25.
//  Copyright © 2016年 szzc. All rights reserved.
//

#ifndef XRNetworkingPlugIn_xrplugin_h
#define XRNetworkingPlugIn_xrplugin_h

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct NSMutableArray {
    Class _field1;
};

struct XRTimeRange {
    unsigned long long start;
    unsigned long long length;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Applications/Instruments.app/Contents/PlugIns/XRNetworkingPlugIn.xrplugin/Contents/MacOS/XRNetworkingPlugIn
// UUID: 4644A0B7-C19A-31E0-8D5F-BF4C3D31E1C6
//
//                           Arch: x86_64
//                 Source version: 61529.0.0.0.0
//       Minimum Mac OS X version: 10.10.0
//                    SDK version: 10.12.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @loader_path/../../../../Frameworks
//                               = /Applications/Xcode.app/Contents/Applications/Instruments.app/Contents/Frameworks
//                       Run path: @loader_path/../../../../../../../../SharedFrameworks
//                               = /Applications/Xcode.app/SharedFrameworks
//

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSControlTextEditingDelegate <NSObject>

@optional
- (NSArray *)control:(NSControl *)arg1 textView:(NSTextView *)arg2 completions:(NSArray *)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (BOOL)control:(NSControl *)arg1 textView:(NSTextView *)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)control:(NSControl *)arg1 isValidObject:(id)arg2;
- (void)control:(NSControl *)arg1 didFailToValidatePartialString:(NSString *)arg2 errorDescription:(NSString *)arg3;
- (BOOL)control:(NSControl *)arg1 didFailToFormatString:(NSString *)arg2 errorDescription:(NSString *)arg3;
- (BOOL)control:(NSControl *)arg1 textShouldEndEditing:(NSText *)arg2;
- (BOOL)control:(NSControl *)arg1 textShouldBeginEditing:(NSText *)arg2;
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(Protocol *)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (BOOL)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol NSTableViewDataSource <NSObject>

@optional
- (NSArray *)tableView:(NSTableView *)arg1 namesOfPromisedFilesDroppedAtDestination:(NSURL *)arg2 forDraggedRowsWithIndexes:(NSIndexSet *)arg3;
- (BOOL)tableView:(NSTableView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(NSTableView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(NSTableView *)arg1 writeRowsWithIndexes:(NSIndexSet *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (void)tableView:(NSTableView *)arg1 updateDraggingItemsForDrag:(id <NSDraggingInfo>)arg2;
- (void)tableView:(NSTableView *)arg1 draggingSession:(NSDraggingSession *)arg2 endedAtPoint:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)tableView:(NSTableView *)arg1 draggingSession:(NSDraggingSession *)arg2 willBeginAtPoint:(struct CGPoint)arg3 forRowIndexes:(NSIndexSet *)arg4;
- (id <NSPasteboardWriting>)tableView:(NSTableView *)arg1 pasteboardWriterForRow:(long long)arg2;
- (void)tableView:(NSTableView *)arg1 sortDescriptorsDidChange:(NSArray *)arg2;
- (void)tableView:(NSTableView *)arg1 setObjectValue:(id)arg2 forTableColumn:(NSTableColumn *)arg3 row:(long long)arg4;
- (id)tableView:(NSTableView *)arg1 objectValueForTableColumn:(NSTableColumn *)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(NSTableView *)arg1;
@end

@protocol NSTableViewDelegate <NSControlTextEditingDelegate>

@optional
- (void)tableViewSelectionIsChanging:(NSNotification *)arg1;
- (void)tableViewColumnDidResize:(NSNotification *)arg1;
- (void)tableViewColumnDidMove:(NSNotification *)arg1;
- (void)tableViewSelectionDidChange:(NSNotification *)arg1;
- (NSArray *)tableView:(NSTableView *)arg1 rowActionsForRow:(long long)arg2 edge:(long long)arg3;
- (BOOL)tableView:(NSTableView *)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
- (double)tableView:(NSTableView *)arg1 sizeToFitWidthOfColumn:(long long)arg2;
- (BOOL)tableView:(NSTableView *)arg1 isGroupRow:(long long)arg2;
- (BOOL)tableView:(NSTableView *)arg1 shouldTypeSelectForEvent:(NSEvent *)arg2 withCurrentSearchString:(NSString *)arg3;
- (long long)tableView:(NSTableView *)arg1 nextTypeSelectMatchFromRow:(long long)arg2 toRow:(long long)arg3 forString:(NSString *)arg4;
- (NSString *)tableView:(NSTableView *)arg1 typeSelectStringForTableColumn:(NSTableColumn *)arg2 row:(long long)arg3;
- (double)tableView:(NSTableView *)arg1 heightOfRow:(long long)arg2;
- (void)tableView:(NSTableView *)arg1 didDragTableColumn:(NSTableColumn *)arg2;
- (void)tableView:(NSTableView *)arg1 didClickTableColumn:(NSTableColumn *)arg2;
- (void)tableView:(NSTableView *)arg1 mouseDownInHeaderOfTableColumn:(NSTableColumn *)arg2;
- (BOOL)tableView:(NSTableView *)arg1 shouldSelectTableColumn:(NSTableColumn *)arg2;
- (NSIndexSet *)tableView:(NSTableView *)arg1 selectionIndexesForProposedSelection:(NSIndexSet *)arg2;
- (BOOL)tableView:(NSTableView *)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)selectionShouldChangeInTableView:(NSTableView *)arg1;
- (NSCell *)tableView:(NSTableView *)arg1 dataCellForTableColumn:(NSTableColumn *)arg2 row:(long long)arg3;
- (BOOL)tableView:(NSTableView *)arg1 shouldTrackCell:(NSCell *)arg2 forTableColumn:(NSTableColumn *)arg3 row:(long long)arg4;
- (BOOL)tableView:(NSTableView *)arg1 shouldShowCellExpansionForTableColumn:(NSTableColumn *)arg2 row:(long long)arg3;
- (NSString *)tableView:(NSTableView *)arg1 toolTipForCell:(NSCell *)arg2 rect:(struct CGRect *)arg3 tableColumn:(NSTableColumn *)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)tableView:(NSTableView *)arg1 shouldEditTableColumn:(NSTableColumn *)arg2 row:(long long)arg3;
- (void)tableView:(NSTableView *)arg1 willDisplayCell:(id)arg2 forTableColumn:(NSTableColumn *)arg3 row:(long long)arg4;
- (void)tableView:(NSTableView *)arg1 didRemoveRowView:(NSTableRowView *)arg2 forRow:(long long)arg3;
- (void)tableView:(NSTableView *)arg1 didAddRowView:(NSTableRowView *)arg2 forRow:(long long)arg3;
- (NSTableRowView *)tableView:(NSTableView *)arg1 rowViewForRow:(long long)arg2;
- (NSView *)tableView:(NSTableView *)arg1 viewForTableColumn:(NSTableColumn *)arg2 row:(long long)arg3;
@end

@protocol XRDeviceLogImporter <NSObject>
- (void)importSession:(NSDictionary *)arg1 fromDevice:(XRDevice *)arg2 intoTrace:(XRTrace *)arg3;
@end

@protocol XRDeviceLogSupport <NSObject>
- (id <XRDeviceLogImporter>)deviceLogImporter;
@end

@protocol XRSQLMigration
- (void)up:(struct sqlite3 *)arg1 newVersion:(int)arg2 isExisting:(BOOL)arg3;
- (int)latestVersion;
@end

@protocol __ARCLiteIndexedSubscripting__
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@end

@protocol __ARCLiteKeyedSubscripting__
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@end

@interface XRNetworkingInstrument : XRLegacyInstrument <XRDeviceLogImporter, XRDeviceLogSupport, NSTableViewDataSource, NSTableViewDelegate>
{
    DTXChannel *_channel;
    NSMutableArray *_tableScrollViews;
    NSMutableArray *_tableTableViews;
    XRNetworkAddressFormatter *_remoteAddrFmtr;
    XRNetworkAddressFormatter *_localAddrFmtr;
    id *_controllersByTable;
    id *_topLevelContexts;
    int _currentTable;
    BOOL _needDisplayError;
    NSString *_errorString;
    XRContext *_histogramContext;
    NSBox *_histogramContainerView;
    DTHistogramGraph *_histogramView;
    NSString *_histogramQuery;
    NSString *_histogramForID;
    NSDictionary *_sessionIfPlayingBack;
}

- (void).cxx_destruct;
- (void)importSession:(id)arg1 fromDevice:(id)arg2 intoTrace:(id)arg3;
- (id)deviceLogImporter;
- (id)stateDisplayDescription;
- (void)setErrorString:(id)arg1;
- (void)_setErrorString:(id)arg1;
- (BOOL)hasCustomStateDisplayDescription;
- (void)_receivedMessage:(id)arg1;
- (void)histogramDrillDown:(id)arg1;
- (void)generateHistogram;
- (id)selectedRunMostActiveProcesses;
- (id)selectedRunMostActiveConnections;
- (void)observeDNSCacheUpdate:(id)arg1;
- (void)reloadDetail;
- (void)updateContext:(id)arg1;
- (void)tick:(id)arg1;
- (BOOL)requiresTickNotification;
- (void)_didIngestDataAndShouldDisplay;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)selectedRunQueryResult;
- (void)selectedRunRecomputeSummaries;
- (void)configureTrack:(id)arg1;
- (int)currentDetailKind;
- (int)currentTableKind;
- (void)displayContext:(id)arg1;
- (id)viewForContext:(id)arg1;
- (id)iconForContext:(id)arg1;
- (id)siblingsForContext:(id)arg1;
- (id)contextRepresentation;
- (void)stopRecording;
- (void)startRecording;
- (void)prepareToRecord;
- (void)_commonImportOrInteractivePrepare;
- (void)dealloc;
- (id)initWithExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface _XRNetworkingRunGuarded : NSObject
{
    NSMutableArray *activityQueries;
    NSCache *cachedResults;
    id *insertTemplates;
    NSMutableSet *seenPids;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

@interface XRNetworkingRun : XRRun
{
    XRSpaceDataToken *_storeTok;
    struct XRTimeRange _latestDataRange;
    BOOL _fromSavedDocument;
    NSString *_savedInstrumentUUID;
    NSArray *_savedActivityQueries;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)activityAtIndex:(unsigned long long)arg1 intervalRange:(struct _NSRange)arg2 intervalsPerBucket:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)labelForActivityAtIndex:(unsigned long long)arg1;
- (unsigned long long)activityViewCount;
- (BOOL)removeActivityQuery:(id)arg1;
- (long long)containsActivityQuery:(id)arg1;
- (void)addActivityQuery:(id)arg1;
- (id)activityQueryID:(id)arg1;
- (id)histogramForQuery:(id)arg1 bins:(id)arg2 timeRange:(struct XRTimeRange)arg3;
- (id)topFiveMostActiveProcesses;
- (id)topFiveMostActiveConnections;
- (id)filteredInterfaceSummary;
- (id)filteredProcessSummary;
- (id)filteredConnectionSummary;
- (void)recomputeSummaries;
- (void)didInitializeDatasetExpertSpace:(id)arg1;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (void)resetLatestDataRange;
- (struct XRTimeRange)latestDataRange;
- (void)targetObserved:(id)arg1 kind:(int)arg2;
- (void)setPath:(id)arg1;
- (void)setInstrument:(id)arg1;
- (void)commitDataForSaving;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)afterOperation:(id)arg1 accessGuarded:(CDUnknownBlockType)arg2;

@end

@interface XRNetworkAddressFormatter : NSFormatter
{
    BOOL _isRemote;
    BOOL _disableReverseLookup;
}

- (id)stringForObjectValue:(id)arg1;
- (id)initAsRemote;
- (id)initAsLocal;
- (id)init;
- (id)initAsRemote:(BOOL)arg1;

@end

@interface XRNetworkingInstrumentDecorator : DTTimelineDecorator
{
    XRNetworkingRun *_run;
    unsigned long long _graphIndex;
}

- (void).cxx_destruct;
- (id)decorateInspectionRanges:(id)arg1;
- (id)decorateContainer:(struct DTTimelineDecorationContainer *)arg1;
- (void)setDefaultsForPlane:(id)arg1;
- (id)initWithRun:(id)arg1 graphIndex:(unsigned long long)arg2;
- (id)init;

@end

@interface XRNetworkActivityQuery : NSObject <NSCoding>
{
    NSString *_queryString;
    XRSQLQueryTemplate *_query;
    int _intervalsPerBucket;
    int _start;
    int _end;
    float *_intervals;
    unsigned long long _biggestIntervalCount;
    NSString *_name;
}

- (void).cxx_destruct;
- (void)getHistogram:(float **)arg1 count:(unsigned long long *)arg2;
- (void)executeWithBindings:(struct NSMutableArray *)arg1 intervalWidth:(int)arg2;
- (id)description;
- (id)queryString;
- (void)setName:(id)arg1;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 queryTemplate:(id)arg2 name:(id)arg3;

@end

@interface _XRNetworkIPv6CacheKey : NSObject <NSCopying>
{
    struct {
        unsigned long long hash;
        unsigned int components[4];
    } _value;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAddr:(const struct in6_addr *)arg1;

@end

@interface XRNetworkDNSCache : NSObject
{
    BOOL willNotify;
    NSObject<OS_dispatch_queue> *q;
    NSMutableDictionary *ipToName;
    NSMutableSet *unresolved;
}

+ (id)defaultCache;
- (void).cxx_destruct;
- (id)hostNameForAddr:(const struct sockaddr *)arg1 length:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end

@interface XRNetworkingProcessFormatter : NSFormatter
{
}

- (id)stringForObjectValue:(id)arg1;

@end

@interface XRNetworkActivityMigration : NSObject <XRSQLMigration>
{
}

- (void)up:(struct sqlite3 *)arg1 newVersion:(int)arg2 isExisting:(BOOL)arg3;
- (int)latestVersion;

@end

@interface XRNetworkingInterfaceFormatter : NSFormatter
{
    XRNetworkingInstrument *_instrument;
}

- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithInstrument:(id)arg1;

@end

#endif /* XRNetworkingPlugIn_xrplugin_h */
