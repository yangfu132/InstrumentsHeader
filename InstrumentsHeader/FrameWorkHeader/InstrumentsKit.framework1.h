//
//  InstrumentsKit.framework1.h
//  MacDemo
//
//  Created by szzc on 2016/11/25.
//  Copyright © 2016年 szzc. All rights reserved.
//

#ifndef InstrumentsKit_framework1_h
#define InstrumentsKit_framework1_h

@interface PFTDocumentController : NSDocumentController
{
    XRDockMenuViewController *_dockMenuController;
    XRFlagViewer *_flagViewer;
    NSWindow *_flagWindow;
    XRTemplateChooserWindowController *_templateChooser;
    XRInstrumentMenuController *_instrumentMenuController;
}

+ (id)importData:(id)arg1 error:(id *)arg2;
+ (BOOL)loadDTPSFile:(id)arg1 dataFile:(id)arg2 msgQFile:(id)arg3 doc:(id)arg4 instrumentIdentifier:(id)arg5 error:(id *)arg6;
- (void).cxx_destruct;
- (void)showCustomAboutBox:(id)arg1;
- (BOOL)presentError:(id)arg1;
- (id)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_canReadContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)_watchDeviceForCompanionDeviceIdentifier:(id)arg1;
- (id)makeUntitledDocumentOfType:(id)arg1 error:(id *)arg2;
- (id)makeDocumentOfType:(id)arg1 title:(id)arg2 error:(id *)arg3;
- (void)changeDocuments:(id)arg1;
- (void)disconnectDocumentFromFlagViewer:(id)arg1;
- (void)removeTemplateChooser:(id)arg1;
- (BOOL)showTemplateChooser;
@property(nonatomic) NSMenu *instrumentMenu;
- (void)dealloc;
- (id)init;

@end

@interface XRDetailViewSplashViewController : NSViewController
{
    NSTextField *_descriptionView;
    NSTextField *_recoveryView;
}

@property __weak NSTextField *recoveryView; // @synthesize recoveryView=_recoveryView;
@property __weak NSTextField *descriptionView; // @synthesize descriptionView=_descriptionView;
- (void).cxx_destruct;
- (void)setDescription:(id)arg1 recovery:(id)arg2;
- (void)viewDidLoad;
- (id)nibBundle;
- (id)nibName;

@end

@interface XRAnalysisCoreStandardDecorator : DTTimelineDecorator
{
    XRTrace *_trace;
    XREngineeringTypeFormatter *_formatter;
    long long _runNumber;
    XRAnalysisCoreGraphSpec *_graphSpec;
    XRAnalysisCoreUIPlanEngineeringTypeOverride *_engineeringTypeOverride;
    XRAnalysisCoreTableQuery *_filter;
}

@property(retain, nonatomic) XRAnalysisCoreTableQuery *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) XRAnalysisCoreUIPlanEngineeringTypeOverride *engineeringTypeOverride; // @synthesize engineeringTypeOverride=_engineeringTypeOverride;
@property(retain, nonatomic) XRAnalysisCoreGraphSpec *graphSpec; // @synthesize graphSpec=_graphSpec;
- (void).cxx_destruct;
- (id)core;
- (unsigned long long)decoratorKind;
- (void)setDefaultsForPlane:(id)arg1;
- (id)init;
- (id)initWithTrace:(id)arg1 runNumber:(long long)arg2 formatter:(id)arg3;

@end

@interface XRStrategiesToolbarView : NSView <DVTWindowActivationStateObserver>
{
    id <DVTCancellable> _windowActivationObservation;
}

+ (id)_colorForLightSeparatorLineIsMain:(BOOL)arg1;
- (void).cxx_destruct;
- (id)_toolbarBaselineColorForceMain:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)window:(id)arg1 didChangeActivationState:(long long)arg2;
- (void)viewWillMoveToWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRStrategiesToolbarButtonCell : NSButtonCell
{
}

@end

@interface XRStrategiesToolbarButton : NSButton
{
    BOOL _clearButtonActive;
    NSButton *_clearButton;
    NSTrackingArea *_trackingArea;
}

+ (Class)cellClass;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) BOOL clearButtonActive; // @synthesize clearButtonActive=_clearButtonActive;
@property(retain, nonatomic) NSButton *clearButton; // @synthesize clearButton=_clearButton;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface XRStrategiesToolbarPopUpButtonCell : NSPopUpButtonCell
{
}

@end

@interface XRStrategiesToolbarPopUpButton : NSPopUpButton
{
}

+ (Class)cellClass;
- (id)initWithFrame:(struct CGRect)arg1 pullsDown:(BOOL)arg2;

@end

__attribute__((visibility("hidden")))
@interface XRAnalysisCoreConnectionIntervalMonitor : NSObject
{
    NSObject<OS_dispatch_semaphore> *_lock;
    struct unordered_map<unsigned long long, XRBookmark, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, XRBookmark>>> *_uuids;
    unsigned char _uuidColumnID;
    unsigned int _tableID;
    DTTimelineDecoratedPlane *_plane;
    XRAnalysisCore *_core;
    XRAnalysisCoreTableQuery *_query;
    XRAnalysisCoreRowArray *_rowArray;
    NSOperation *_op;
}

@property(retain, nonatomic) NSOperation *op; // @synthesize op=_op;
@property(retain, nonatomic) XRAnalysisCoreRowArray *rowArray; // @synthesize rowArray=_rowArray;
@property(nonatomic) unsigned char uuidColumnID; // @synthesize uuidColumnID=_uuidColumnID;
@property(nonatomic) unsigned int tableID; // @synthesize tableID=_tableID;
@property(retain, nonatomic) XRAnalysisCoreTableQuery *query; // @synthesize query=_query;
@property(nonatomic) __weak XRAnalysisCore *core; // @synthesize core=_core;
@property(nonatomic) __weak DTTimelineDecoratedPlane *plane; // @synthesize plane=_plane;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

__attribute__((visibility("hidden")))
@interface XRAnalysisCoreConnectionIntervalModel : NSObject
{
    XRTrace *_trace;
    long long _runNumber;
    unsigned long long _filterValue;
    NSMutableDictionary *_visualConnectionTableToColumnMaps;
    NSMutableArray *_monitoringInfo;
    struct _opaque_pthread_mutex_t _lock;
    NSArray *_visualConnectionTableIDs;
}

@property(copy, nonatomic) NSArray *visualConnectionTableIDs; // @synthesize visualConnectionTableIDs=_visualConnectionTableIDs;
- (void).cxx_destruct;
- (void)accessLocked:(CDUnknownBlockType)arg1;
- (id)columnMapForTable:(unsigned int)arg1;
- (void)applyHighlightsToPlanesForUUIDs:(const unsigned long long *)arg1 count:(unsigned int)arg2;
- (id)planeForUUID:(unsigned int)arg1;
- (BOOL)tick;
- (void)setGroupPlanesToMonitor:(id)arg1;
- (void)_monitorPlaneOrGroupPlane:(id)arg1 core:(id)arg2;
- (void)_monitorPlane:(id)arg1 core:(id)arg2;
- (void)_processMonitor:(id)arg1 startingRow:(unsigned int)arg2;
- (void)setFilterValue:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithTrace:(id)arg1 runNumber:(long long)arg2;

@end

__attribute__((visibility("hidden")))
@interface XRAnalysisCoreQueryPeakDecoratorHandler : NSObject <XRAnalysisCoreQueryHandler>
{
    NSObject<OS_dispatch_semaphore> *_lock;
    struct DTTimelineDecorationContainer *_container;
    unsigned char _timeColumnID;
    unsigned char _valueColumnID;
    unsigned char _labelColumnID;
    unsigned char _valueColumnImpType;
    int _nextAvailableLabel;
    unsigned long long _highlightType;
    union XRBookmark _highlightBookmark;
    const vector_59b01178 *_highlightBookmarks;
}

- (void).cxx_destruct;
- (void)reduceFromLocalResults:(id)arg1;
- (void)runWorkgroup:(unsigned short)arg1 of:(unsigned int)arg2 withLocalResults:(id)arg3 context:(id)arg4 rowIterator:(struct XRAnalysisCoreReadCursor *)arg5;
- (id)initWithContainer:(struct DTTimelineDecorationContainer *)arg1 timeColumnID:(unsigned char)arg2 valueColumnID:(unsigned char)arg3 lableColumnID:(unsigned char)arg4 valueColumnImpType:(unsigned char)arg5 highlightBookmarks:(const vector_59b01178 *)arg6;
- (id)initWithContainer:(struct DTTimelineDecorationContainer *)arg1 timeColumnID:(unsigned char)arg2 valueColumnID:(unsigned char)arg3 lableColumnID:(unsigned char)arg4 valueColumnImpType:(unsigned char)arg5 highlightBookmark:(union XRBookmark)arg6;
- (id)initWithContainer:(struct DTTimelineDecorationContainer *)arg1 timeColumnID:(unsigned char)arg2 valueColumnID:(unsigned char)arg3 lableColumnID:(unsigned char)arg4 valueColumnImpType:(unsigned char)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

__attribute__((visibility("hidden")))
@interface XRAnalysisCoreQueryPointDecorator : XRAnalysisCoreQueryBasedDecorator
{
    BOOL _isHighlightable;
    BOOL _isEventType;
    struct _opaque_pthread_rwlock_t _imageRdWrLock;
    struct unordered_map<IconLookup_t, NSImage *, std::__1::hash<IconLookup_t>, std::__1::equal_to<IconLookup_t>, std::__1::allocator<std::__1::pair<const IconLookup_t, NSImage *>>> _iconHash;
    int _iconSize;
    XRTheme *_theme;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)decorateInspectionRanges:(id)arg1 fromCore:(id)arg2 qualityOfService:(unsigned int)arg3 priority:(int)arg4 group:(id)arg5;
- (void)fillContainer:(struct DTTimelineDecorationContainer *)arg1 fromCore:(id)arg2 qualityOfService:(unsigned int)arg3 priority:(int)arg4 group:(id)arg5;
- (id)representativeQueryFromCore:(id)arg1;
- (BOOL)heightChangedForPlane:(id)arg1;
- (BOOL)_setHeightDependantDefaultsForPlane:(id)arg1;
- (void)setDefaultsForPlane:(id)arg1;
- (void)dealloc;
- (id)initWithTrace:(id)arg1 runNumber:(long long)arg2 formatter:(id)arg3;
- (id)initWithTrace:(id)arg1 runNumber:(long long)arg2 formatter:(id)arg3 treatment:(id)arg4 tableID:(unsigned int)arg5 timeColumnID:(unsigned char)arg6 valueColumnID:(unsigned char)arg7 valueLabelColumnID:(unsigned char)arg8 colorColumnID:(unsigned char)arg9 visualConnectionUUIDLabelColumnID:(unsigned char)arg10 selectionCriteria:(id)arg11 selectionColumnIDs:(id)arg12;
- (id)initWithTrace:(id)arg1 runNumber:(long long)arg2 formatter:(id)arg3 treatment:(id)arg4 tableID:(unsigned int)arg5 timeColumnID:(unsigned char)arg6 durationColumnID:(unsigned char)arg7 valueColumnID:(unsigned char)arg8 valueLabelColumnID:(unsigned char)arg9 colorColumnID:(unsigned char)arg10 visualConnectionUUIDLabelColumnID:(unsigned char)arg11 selectionCriteria:(id)arg12 selectionColumnIDs:(id)arg13;

@end

@interface XRNavButtonsTextCellView : NSTableCellView
{
    NSView *_mainContentView;
    NSButton *_actionButton;
    id _target;
    SEL _action;
    NSTrackingArea *_fullViewTrackingArea;
    NSArray *_visibleActionButtonLayoutConstraints;
    NSArray *_normalLayoutConstraints;
    BOOL _actionButtonVisible;
    XRActionContext *_actionContext;
}

+ (BOOL)_mainContentViewIsPrimaryTextField;
+ (id)_createMainContentView;
@property(retain, nonatomic) XRActionContext *actionContext; // @synthesize actionContext=_actionContext;
- (void).cxx_destruct;
- (id)_mainContentView;
- (BOOL)isAccessibilityElement;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (void)updateConstraints;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_showActionButtonIfNeeded;
- (void)_hideActionButtonIfNeeded;
- (void)_lazyInitActionButtonSupport;
- (void)_actionButtonClick:(id)arg1;
- (void)addButtonWithIdentifier:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface XRTopicBrowserView : NSView
{
    id <XRTopicBrowserViewDelegate> _delegate;
}

@property __weak id <XRTopicBrowserViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)viewDidMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface _XRCLIPSDebuggingUIState : NSObject
{
    NSMutableSet *_availableModuleSet;
    NSMutableAttributedString *_consoleAttributedText;
    NSMutableAttributedString *_factAttributedText;
    NSString *_chosenModuleName;
    NSMutableArray *_availableModuleNames;
}

@property(retain, nonatomic) NSMutableArray *availableModuleNames; // @synthesize availableModuleNames=_availableModuleNames;
@property(retain, nonatomic) NSString *chosenModuleName; // @synthesize chosenModuleName=_chosenModuleName;
@property(retain, nonatomic) NSMutableAttributedString *factAttributedText; // @synthesize factAttributedText=_factAttributedText;
@property(retain, nonatomic) NSMutableAttributedString *consoleAttributedText; // @synthesize consoleAttributedText=_consoleAttributedText;
@property(retain, nonatomic) NSMutableSet *availableModuleSet; // @synthesize availableModuleSet=_availableModuleSet;
- (void).cxx_destruct;
- (id)init;

@end

@interface _XRCLIPSDebuggerChooserState : NSObject
{
    NSMutableArray *_debuggerStatesByID;
}

@property(retain, nonatomic) NSMutableArray *debuggerStatesByID; // @synthesize debuggerStatesByID=_debuggerStatesByID;
- (void).cxx_destruct;
- (id)init;

@end

@interface _XRDebuggerNavigatorItem : NSObject
{
    NSMutableArray *_subItems;
    NSString *_title;
    NSView *_detailView;
    id <NSObject> _representedObject;
}

@property(retain, nonatomic) id <NSObject> representedObject; // @synthesize representedObject=_representedObject;
@property(readonly, nonatomic) NSView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray *subItems; // @synthesize subItems=_subItems;
- (void).cxx_destruct;
- (BOOL)isHeader;
- (id)initWithTitle:(id)arg1 detailView:(id)arg2 object:(id)arg3;

@end

@interface _XRDebuggerHeaderOnly : _XRDebuggerNavigatorItem
{
}

- (BOOL)isHeader;

@end

@interface _XRDebuggerSchemaDetails : NSObject <NSCopying>
{
    NSString *_schemaDescription;
    NSArray *_columns;
}

@property(retain, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(retain, nonatomic) NSString *schemaDescription; // @synthesize schemaDescription=_schemaDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface _XRDebuggerSchemaColumnDetail : NSObject
{
    unsigned long long _columnID;
    NSString *_mnemonic;
    NSString *_engineeringName;
    NSString *_engineeringType;
}

@property(retain, nonatomic) NSString *engineeringType; // @synthesize engineeringType=_engineeringType;
@property(retain, nonatomic) NSString *engineeringName; // @synthesize engineeringName=_engineeringName;
@property(retain, nonatomic) NSString *mnemonic; // @synthesize mnemonic=_mnemonic;
@property(nonatomic) unsigned long long columnID; // @synthesize columnID=_columnID;
- (void).cxx_destruct;

@end

@interface _XRDebuggerTableDetail : NSObject
{
    NSNumber *_tableID;
    NSString *_debugString;
    NSString *_access;
    NSString *_visibility;
}

@property(retain, nonatomic) NSString *visibility; // @synthesize visibility=_visibility;
@property(retain, nonatomic) NSString *access; // @synthesize access=_access;
@property(retain, nonatomic) NSString *debugString; // @synthesize debugString=_debugString;
@property(retain, nonatomic) NSNumber *tableID; // @synthesize tableID=_tableID;
- (void).cxx_destruct;

@end

@interface _XRDebuggerModelerDetail : NSObject
{
    unsigned char _stage;
    NSString *_modelerClassName;
    NSString *_debugString;
    NSArray *_tableBindings;
    unsigned long long _instanceNumber;
}

@property(nonatomic) unsigned long long instanceNumber; // @synthesize instanceNumber=_instanceNumber;
@property(retain, nonatomic) NSArray *tableBindings; // @synthesize tableBindings=_tableBindings;
@property(retain, nonatomic) NSString *debugString; // @synthesize debugString=_debugString;
@property(retain, nonatomic) NSString *modelerClassName; // @synthesize modelerClassName=_modelerClassName;
@property(nonatomic) unsigned char stage; // @synthesize stage=_stage;
- (void).cxx_destruct;

@end

@interface XRInstrumentDebuggerWindowController : NSWindowController <XRLazyKVOResponder, NSOutlineViewDelegate, NSTextViewDelegate, NSTableViewDataSource, NSTableViewDelegate, NSWindowDelegate>
{
    BOOL _alreadyUpdating;
    XRLazyKVOAdapter *_kvoAdapter;
    BOOL _fetching;
    BOOL _observingSelf;
    _XRCLIPSDebuggerChooserState *_clipsDebuggerChooser;
    NSOperation *_currentFetchOp;
    NSMutableArray *_navigatorItems;
    NSNumber *_debuggerPanelDetailMode;
    _XRDebuggerTableDetail *_selectedTableDetail;
    NSDictionary *_coreSchemasByName;
    NSArray *_knownPaths;
    NSArray *_tableBindings;
    NSArray *_modelerInstances;
    NSArray *_errors;
    long long _lastErrorSignature;
    NSOutlineView *_navigatorView;
    NSView *_inspectorPane;
    NSView *_schemaDetailView;
    NSScrollView *_factDetailView;
    NSScrollView *_pathsDetailView;
    NSScrollView *_consoleDetailView;
    NSTextView *_consoleTextView;
    NSTextView *_commandView;
    NSSplitView *_tableBindingDetailView;
    NSSplitView *_modelersDetailView;
    NSScrollView *_errorsDetailView;
    NSView *_clipsDebuggerDetail;
    NSArrayController *_debuggerArrayController;
    NSTreeController *_navigatorTreeController;
    NSArrayController *_tableArrayController;
    NSSegmentedControl *_consolePicker;
    XRAnalysisCoreTableViewController *_tableContentsViewController;
    NSPopUpButton *_profileOptionControl;
}

@property __weak NSPopUpButton *profileOptionControl; // @synthesize profileOptionControl=_profileOptionControl;
@property(retain) XRAnalysisCoreTableViewController *tableContentsViewController; // @synthesize tableContentsViewController=_tableContentsViewController;
@property __weak NSSegmentedControl *consolePicker; // @synthesize consolePicker=_consolePicker;
@property __weak NSArrayController *tableArrayController; // @synthesize tableArrayController=_tableArrayController;
@property __weak NSTreeController *navigatorTreeController; // @synthesize navigatorTreeController=_navigatorTreeController;
@property __weak NSArrayController *debuggerArrayController; // @synthesize debuggerArrayController=_debuggerArrayController;
@property __weak NSView *clipsDebuggerDetail; // @synthesize clipsDebuggerDetail=_clipsDebuggerDetail;
@property(retain) NSScrollView *errorsDetailView; // @synthesize errorsDetailView=_errorsDetailView;
@property __weak NSSplitView *modelersDetailView; // @synthesize modelersDetailView=_modelersDetailView;
@property __weak NSSplitView *tableBindingDetailView; // @synthesize tableBindingDetailView=_tableBindingDetailView;
@property NSTextView *commandView; // @synthesize commandView=_commandView;
@property NSTextView *consoleTextView; // @synthesize consoleTextView=_consoleTextView;
@property __weak NSScrollView *consoleDetailView; // @synthesize consoleDetailView=_consoleDetailView;
@property __weak NSScrollView *pathsDetailView; // @synthesize pathsDetailView=_pathsDetailView;
@property __weak NSScrollView *factDetailView; // @synthesize factDetailView=_factDetailView;
@property(retain) NSView *schemaDetailView; // @synthesize schemaDetailView=_schemaDetailView;
@property __weak NSView *inspectorPane; // @synthesize inspectorPane=_inspectorPane;
@property __weak NSOutlineView *navigatorView; // @synthesize navigatorView=_navigatorView;
@property(nonatomic) long long lastErrorSignature; // @synthesize lastErrorSignature=_lastErrorSignature;
@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSArray *modelerInstances; // @synthesize modelerInstances=_modelerInstances;
@property(retain, nonatomic) NSArray *tableBindings; // @synthesize tableBindings=_tableBindings;
@property(retain, nonatomic) NSArray *knownPaths; // @synthesize knownPaths=_knownPaths;
@property(retain, nonatomic) NSDictionary *coreSchemasByName; // @synthesize coreSchemasByName=_coreSchemasByName;
@property(retain, nonatomic) _XRDebuggerTableDetail *selectedTableDetail; // @synthesize selectedTableDetail=_selectedTableDetail;
@property(nonatomic) NSNumber *debuggerPanelDetailMode; // @synthesize debuggerPanelDetailMode=_debuggerPanelDetailMode;
@property(retain, nonatomic) NSMutableArray *navigatorItems; // @synthesize navigatorItems=_navigatorItems;
@property(retain, nonatomic) NSOperation *currentFetchOp; // @synthesize currentFetchOp=_currentFetchOp;
@property(nonatomic) BOOL observingSelf; // @synthesize observingSelf=_observingSelf;
@property(nonatomic, getter=isFetching) BOOL fetching; // @synthesize fetching=_fetching;
@property(retain, nonatomic) _XRCLIPSDebuggerChooserState *clipsDebuggerChooser; // @synthesize clipsDebuggerChooser=_clipsDebuggerChooser;
- (void).cxx_destruct;
- (void)validateAnalysisCore:(id)arg1;
- (void)instanceModelers:(id)arg1;
- (void)runBindingSolver:(id)arg1;
- (void)refresh:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
@property(readonly) PFTTraceDocument *traceDocument;
- (BOOL)shouldCloseDocument;
- (id)windowFrameAutosaveName;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)prepareForLazyKVOUpdate:(id)arg1 object:(id)arg2 keyPath:(id)arg3 context:(const void *)arg4;
- (void)handleLazyKVOUpdate:(id)arg1;
- (void)_eventHorizonMoved:(id)arg1;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (void)panicStopIssued:(id)arg1;
- (void)profileOptionChanged:(id)arg1;
- (void)_fullFetch;
- (void)_forceFullFetch;
- (id)_chosenModuleName;
- (void)_updateUIState;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface PFTMultiStateButtonCell : NSCell
{
    BOOL _switchPressed;
    struct CGRect _currentCellBoundsDuringGesture;
    id _target;
    SEL _action;
}

+ (BOOL)prefersTrackingUntilMouseUp;
- (void).cxx_destruct;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (BOOL)shouldTrackMouse:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;

@end

@interface DTISAReferenceGuideWindowController : NSWindowController <NSComboBoxDataSource, NSComboBoxDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    BOOL _updatingUI;
    BOOL _matchTextToComboBoxWhenEditingEnds;
    BOOL _addedPDFViewChangedNotification;
    PDFView *_pdfView;
    NSComboBox *_instructionComboBox;
    NSTextField *_pageNumberTextField;
    NSButton *_previousPageButton;
    NSButton *_nextPageButton;
    NSTableView *_mnemonicsTableView;
    NSButton *_previousMnemonicButton;
    NSButton *_nextMnemonicButton;
    CDStruct_3570f18b _cpudef;
    NSArray *_mnemonicsList;
    PDFDocument *_pdfDocument;
    NSDictionary *_instructionToPageMap;
    NSDictionary *_pageToInstructionMap;
    NSArray *_sortedInstructionList;
    NSArray *_sortedPageList;
}

@property(retain) NSArray *sortedPageList; // @synthesize sortedPageList=_sortedPageList;
@property(retain) NSArray *sortedInstructionList; // @synthesize sortedInstructionList=_sortedInstructionList;
@property(retain) NSDictionary *pageToInstructionMap; // @synthesize pageToInstructionMap=_pageToInstructionMap;
@property(retain) NSDictionary *instructionToPageMap; // @synthesize instructionToPageMap=_instructionToPageMap;
@property(retain) PDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
@property(copy) NSArray *mnemonicsList; // @synthesize mnemonicsList=_mnemonicsList;
@property CDStruct_3570f18b cpudef; // @synthesize cpudef=_cpudef;
@property __weak NSButton *nextMnemonicButton; // @synthesize nextMnemonicButton=_nextMnemonicButton;
@property __weak NSButton *previousMnemonicButton; // @synthesize previousMnemonicButton=_previousMnemonicButton;
@property __weak NSTableView *mnemonicsTableView; // @synthesize mnemonicsTableView=_mnemonicsTableView;
@property __weak NSButton *nextPageButton; // @synthesize nextPageButton=_nextPageButton;
@property __weak NSButton *previousPageButton; // @synthesize previousPageButton=_previousPageButton;
@property __weak NSTextField *pageNumberTextField; // @synthesize pageNumberTextField=_pageNumberTextField;
@property __weak NSComboBox *instructionComboBox; // @synthesize instructionComboBox=_instructionComboBox;
@property __weak PDFView *pdfView; // @synthesize pdfView=_pdfView;
- (void).cxx_destruct;
- (void)_matchPDFToComboBox;
- (unsigned long long)_pageIndexForInstruction:(id)arg1;
- (id)_bestInstructionForPageIndex:(unsigned long long)arg1 currentlySelectedInstruction:(id)arg2;
- (id)_bestInstructionsForPageIndex:(unsigned long long)arg1;
- (void)_setTableViewToInstruction:(id)arg1;
- (void)_setComboBoxToInstruction:(id)arg1;
- (id)_fileNameForCPUType:(int)arg1;
- (id)_URLForCPUResourceType:(id)arg1;
- (id)_pageToInstructionMapURL;
- (id)_instructionToPageMapURL;
- (id)_pdfURL;
- (void)_updateUI;
- (void)_reloadData;
- (void)selectNextMnemonic:(id)arg1;
- (void)selectPreviousMnemonic:(id)arg1;
- (void)showCopyright:(id)arg1;
- (void)nextPage:(id)arg1;
- (void)prevPage:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)comboBoxSelectionDidChange:(id)arg1;
- (unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBox:(id)arg1 completedString:(id)arg2;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (void)updateCPUDef:(CDStruct_3570f18b)arg1 mnemonicsList:(id)arg2;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithCPUDef:(CDStruct_3570f18b)arg1 mnemonicsList:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRExecOptionsViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, XRTopicInterfaceComponent>
{
    NSButton *_showHiddenFilesButton;
    NSButton *_traversePackagesButton;
    NSTextField *_workingDirectory;
    NSTextField *_argumentsField;
    NSString *_argumentsString;
    NSMutableArray *_names;
    NSMutableArray *_values;
    PFTProcess *_selectedProcess;
    DVTTableView *_environmentVariablesTable;
    DVTGradientImageButton *_addEnvironmentVariableButton;
    DVTGradientImageButton *_removeEnvironmentVariableButton;
    DVTGradientImagePopUpButton *_optionsPopUpButton;
    NSMenu *_optionsMenu;
    DVTBorderedView *_borderedView;
    XRTopic *_topic;
    NSString *_selectedPath;
    NSString *_workingDirectoryString;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *workingDirectoryString; // @synthesize workingDirectoryString=_workingDirectoryString;
@property(copy, nonatomic) NSString *selectedPath; // @synthesize selectedPath=_selectedPath;
@property(retain, nonatomic) XRTopic *topic; // @synthesize topic=_topic;
@property(nonatomic) __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(nonatomic) __weak NSMenu *optionsMenu; // @synthesize optionsMenu=_optionsMenu;
@property(nonatomic) __weak DVTGradientImagePopUpButton *optionsPopUpButton; // @synthesize optionsPopUpButton=_optionsPopUpButton;
@property(nonatomic) __weak DVTGradientImageButton *removeEnvironmentVariableButton; // @synthesize removeEnvironmentVariableButton=_removeEnvironmentVariableButton;
@property(nonatomic) __weak DVTGradientImageButton *addEnvironmentVariableButton; // @synthesize addEnvironmentVariableButton=_addEnvironmentVariableButton;
@property(nonatomic) __weak DVTTableView *environmentVariablesTable; // @synthesize environmentVariablesTable=_environmentVariablesTable;
@property(retain, nonatomic) PFTProcess *selectedProcess; // @synthesize selectedProcess=_selectedProcess;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(retain, nonatomic) NSMutableArray *names; // @synthesize names=_names;
@property(copy, nonatomic) NSString *argumentsString; // @synthesize argumentsString=_argumentsString;
@property(nonatomic) __weak NSTextField *argumentsField; // @synthesize argumentsField=_argumentsField;
@property(nonatomic) __weak NSTextField *workingDirectory; // @synthesize workingDirectory=_workingDirectory;
@property(nonatomic) __weak NSButton *traversePackagesButton; // @synthesize traversePackagesButton=_traversePackagesButton;
@property(nonatomic) __weak NSButton *showHiddenFilesButton; // @synthesize showHiddenFilesButton=_showHiddenFilesButton;
- (void).cxx_destruct;
- (void)_updateUI;
- (void)_pathSelected:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setSubTopic:(id)arg1;
- (id)subTopic;
- (void)applyResult:(id)arg1;
- (void)_traversePackagesButtonClicked:(id)arg1;
- (void)_removeEnvironmentVariableButtonClicked:(id)arg1;
- (void)_delete;
- (void)_addEnvironmentVariableButtonClicked:(id)arg1;
- (void)hideTraverseButton;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithTopic:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRControlBandViewController : NSViewController
{
    NSTextField *_styleChooserLabel;
    NSPopUpButton *_styleChooser;
    XRInstrument *_instrument;
}

+ (void)initialize;
@property(retain, nonatomic) XRInstrument *instrument; // @synthesize instrument=_instrument;
@property(nonatomic) __weak NSPopUpButton *styleChooser; // @synthesize styleChooser=_styleChooser;
@property(nonatomic) __weak NSTextField *styleChooserLabel; // @synthesize styleChooserLabel=_styleChooserLabel;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithInstrument:(id)arg1;

@end

@interface PFTScroller : NSScroller
{
    BOOL _isZoomable;
    BOOL _debugModeEnabled;
    BOOL _firstClick;
    int _zoomControl;
    struct CGSize _trailingImageSize;
    struct CGSize _leadingImageSize;
    struct CGPoint _lastLocationInKnobRect;
    double _hitInset;
    BOOL _isSetupForDualControl;
    NSView *_primary;
    BOOL _ownsPrimaryView;
    NSView *_secondary;
    BOOL _isRespondingToScroll;
}

- (void).cxx_destruct;
- (void)_doScrollerPFT:(id)arg1;
- (void)setPrimary:(id)arg1;
- (BOOL)isPinnedAtExtremePoint;
- (void)mouseDragged:(id)arg1;
- (void)trackKnob:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)_setDebugModeOn:(BOOL)arg1;
- (void)resetScrollToRight;
- (void)setKnobProportion:(double)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setDoubleValue:(double)arg1 knobProportion:(double)arg2;
- (void)_secondaryFrameScrolled:(id)arg1;
- (void)_primaryFrameScrolled:(id)arg1;
- (void)_secondaryFrameChanged:(id)arg1;
- (void)_primaryFrameChanged:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)_setupDualViewControl;
- (BOOL)isZoomable;
- (void)setIsZoomable:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface PFTScrollView : NSScrollView
{
    NSScrollView *_scrollSibling;
    BOOL _scrollingPeer;
    BOOL _ignoreScrollWheelEvents;
    double _minHeight;
    NSView *_horizontalScrollerViewToAvoid;
}

- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)awakeFromNib;
- (void)_doScroller:(id)arg1 hitPart:(long long)arg2 multiplier:(double)arg3;
- (double)_repeatMultiplier:(double)arg1;
- (void)scrollWheel:(id)arg1;
- (BOOL)ignoreScrollWheelEvents;
- (void)setIgnoreScrollWheelEvents:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setMinHight:(double)arg1;
- (void)tile;
- (void)reflectScrolledClipView:(id)arg1;
- (BOOL)_ownsWindowGrowBox;

@end

@interface PFTSelectedInstrumentList : PFTInstrumentList
{
}

- (void)endCommand:(id)arg1;
- (void)startCommand:(id)arg1;
- (BOOL)acceptCommand:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)_instrumentUnselected:(id)arg1;
- (void)_instrumentSelected:(id)arg1;
- (BOOL)isInstrumentOwner:(id)arg1;
- (void)dealloc;
- (id)initAndObserve:(BOOL)arg1;

@end

@interface XRTrackAndDetailSplitViewController : NSSplitViewController
{
    NSLayoutConstraint *_forcedBottomHeightConstraint;
}

- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) NSView *bottomCtrlView;
- (id)topCtrlView;

@end

@interface XRAnalysisCoreStandardDataSource : NSObject <XRBrushDataSource>
{
    XRAnalysisCoreGraphSpec *_spec;
}

- (void).cxx_destruct;
- (id)refreshDataInRange:(struct XRTimeRange)arg1 run:(id)arg2;
- (void)run:(id)arg1 providePoints:(struct XRGraphPoint **)arg2 count:(long long *)arg3 graphSequence:(id)arg4 forTimeRange:(struct XRTimeRange)arg5 minimumInterval:(unsigned long long)arg6 graphAtIndex:(long long)arg7;
- (unsigned long long)numberOfGraphsForRun:(id)arg1;
- (id)graphStyleForRun:(id)arg1;
- (id)initWithGraphSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRPathComponentCellAccessibilityObject : NSObject
{
    NSString *_role;
    id _pathCell;
    NSString *_description;
    NSPathComponentCell *_componentCell;
}

@property(readonly) NSPathComponentCell *componentCell; // @synthesize componentCell=_componentCell;
- (void).cxx_destruct;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPathComponentCell:(id)arg1 pathCell:(id)arg2 description:(id)arg3;

@end

__attribute__((visibility("hidden")))
@interface XRStrategyUIHighlightingControllerSelectionChanges : NSObject
{
    DTTimelinePlane *_selectedPlane;
    struct XRTimeRange _selectedTimeRange;
}

@property(nonatomic) struct XRTimeRange selectedTimeRange; // @synthesize selectedTimeRange=_selectedTimeRange;
@property(retain, nonatomic) DTTimelinePlane *selectedPlane; // @synthesize selectedPlane=_selectedPlane;
- (void).cxx_destruct;

@end

__attribute__((visibility("hidden")))
@interface XRStrategyUIHighlightingController : NSObject
{
    PFTTraceDocument *_traceDocument;
    long long _currentRunNumber;
    unsigned long long _highlightType;
    union XRBookmark _highlightBookmark;
    unsigned int _highlightTableID;
    unsigned long long *_highlightUUIDArray;
    unsigned int _highlightUUIDArrayCount;
    DTTimelinePlane *_highlightedPlane;
    struct XRTimeRange _highlightedPlaneTimeRange;
    DTTimelineGraph *_timelineGraph;
    DTTimelineDecoratedPlane *_overlayPlane;
    XRAnalysisCoreConnectionIntervalDecorator *_connectionsDecorator;
    XRAnalysisCoreConnectionIntervalModel *_connectionsModel;
}

@property(retain, nonatomic) XRAnalysisCoreConnectionIntervalModel *connectionsModel; // @synthesize connectionsModel=_connectionsModel;
@property(retain, nonatomic) XRAnalysisCoreConnectionIntervalDecorator *connectionsDecorator; // @synthesize connectionsDecorator=_connectionsDecorator;
@property(retain, nonatomic) DTTimelineDecoratedPlane *overlayPlane; // @synthesize overlayPlane=_overlayPlane;
@property(nonatomic) __weak DTTimelineGraph *timelineGraph; // @synthesize timelineGraph=_timelineGraph;
- (void).cxx_destruct;
- (void)restoreHighlightState;
- (void)shutdown;
- (void)highlightSelectedUUID:(unsigned long long)arg1 bookmark:(union XRBookmark)arg2 timeRange:(struct XRTimeRange)arg3 onPlane:(id)arg4 withRoute:(id)arg5;
- (void)highlightSelectedObjectAtTime:(unsigned long long)arg1 onPlane:(id)arg2 withRoute:(id)arg3;
- (void)_updatePlaneHighlightsForCore:(id)arg1 connectionChainTableID:(unsigned int)arg2 uuid:(unsigned long long)arg3 route:(id)arg4;
- (BOOL)_getUUID:(unsigned long long *)arg1 bookmark:(union XRBookmark *)arg2 changes:(id)arg3 forQuery:(id)arg4 tableID:(unsigned int)arg5 timeColumnID:(unsigned char)arg6 durationColumnID:(unsigned char)arg7 visualConnectionUUIDLabelColumnID:(unsigned char)arg8 core:(id)arg9 inspectTime:(unsigned long long)arg10;
- (void)_updateHighlightsForChanges:(id)arg1 afterOp:(id)arg2;
- (void)_resetAndClearHighlights;
- (void)_clearHighlightsFromPlanes;
- (id)_createColumnSelectionValueSets:(id)arg1 schema:(id)arg2 uuid:(unsigned long long)arg3 route:(id)arg4;
- (void)resolutionDidChange:(unsigned long long)arg1;
- (id)_overlayPlane;
- (BOOL)createOverlayPlaneAndDecoratorForRunNumber:(long long)arg1 resolution:(unsigned long long)arg2;
- (void)updateOverlayPlaneAfterModelChangeForResolution:(unsigned long long)arg1 planes:(id)arg2;
- (void)refreshConnectionsModelForRunNumber:(long long)arg1 planes:(id)arg2;
- (void)_createConnectionIntervalModelForRunNumber:(long long)arg1;
- (void)createConnectionsIntervalDecoratorForRunNumber:(long long)arg1 resolution:(unsigned long long)arg2;
- (unsigned int)_connectionChainTableIDForRunNumber:(long long)arg1;
- (unsigned int)_connectionPlaneTableIDForRunNumber:(long long)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void)dealloc;
- (id)init;

@end

@interface XRAnalysisCoreTableViewTimeslicePersonality : XRAnalysisCoreTableViewPersonality
{
}

- (BOOL)contentChangesWithTimeInspection;
- (BOOL)rowSelectionDoesNotAffectTimeSelection;
- (void)personalizeContentFilter:(id)arg1 timeInspection:(unsigned long long)arg2;

@end

@interface XRAnalysisCoreValueCellView : XRNavButtonsTextCellView <XRAnalysisCoreValueCellView>
{
    XREngineeringTypeFormatter *_formatter;
    XRAnalysisCoreValueCellTextView *_customTextView;
    XRAnalysisCoreValue *_value;
    BOOL _customTextViewStale;
    BOOL _emphasized;
    BOOL _selected;
    BOOL _filteredOut;
    BOOL _diminutivePresentation;
}

+ (BOOL)_mainContentViewIsPrimaryTextField;
+ (id)_createMainContentView;
@property(retain, nonatomic) XREngineeringTypeFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic) BOOL diminutivePresentation; // @synthesize diminutivePresentation=_diminutivePresentation;
@property(nonatomic) BOOL filteredOut; // @synthesize filteredOut=_filteredOut;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL emphasized; // @synthesize emphasized=_emphasized;
- (void).cxx_destruct;
- (id)attributedStringValue;
- (id)stringValue;
- (void)viewDidMoveToWindow;
- (void)_refreshTextView;
- (void)_mapStringForValue:(id)arg1 fromNarrative:(BOOL)arg2 recursionDepth:(int)arg3 intoRangeMap:(id)arg4 intoString:(id)arg5 defaultAttributes:(id)arg6;
@property(copy, nonatomic) NSAttributedString *placeholderString;
- (void)setActionContext:(id)arg1;
- (void)setAnalysisCoreValue:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface PFTSquareToggleButtonCell : PFTMultiStateButtonCell
{
    BOOL _toggleState;
    NSTableHeaderCell *_drawCell;
}

- (void).cxx_destruct;
- (void)setToggleState:(BOOL)arg1;
- (BOOL)_sendActionFrom:(id)arg1;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

@interface PFTSquareToggleButton : NSControl
{
}

- (void)setToggleState:(BOOL)arg1;
- (BOOL)isFlipped;
- (void)viewDidMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface PFTTraceDocument : NSDocument <XRDeviceObserver, PFTInstrumentClient, NSOpenSavePanelDelegate, NSAnimationDelegate, NSOutlineViewDelegate, XRProcessTargetedObject>
{
    BOOL _lowerDisplayIsHidden;
    BOOL _t_lowerDisplayIsHidden;
    NSMutableArray *_navigationElements;
    XRContext *_rootContext;
    NSURL *_originalURL;
    BOOL _createdViaTemplate;
    NSDictionary *_creationTemplateData;
    XRContext *_restorationContext;
    NSDictionary *_template;
    struct CGRect _previousUpperRect;
    struct CGRect _previousLowerRect;
    struct CGRect _previousTrackRect;
    BOOL _doAnimationsInstantly;
    XRFloatValueAnimation *_instrumentsAnimation;
    XRTrace *_trace;
    unsigned long long _currentTimeInspectionLocation;
    double _currentTimeRecordLocation;
    struct XRTimeRange _selectedTimeRange;
    BOOL _expandTimeRangeAutomatically;
    BOOL _ignoreTimeSelections;
    XRSymbolInspectorViewController *_symbolicationController;
    BOOL _symbolicationControllerModelIsOutOfDate;
    NSOperation *_symbolicationControllerModelUpdateOp;
    NSOperation *_symbolicationControllerUIUpdateOp;
    NSString *_t_windowString;
    struct CGRect _t_TrackRect;
    struct CGRect _t_ControlRect;
    struct CGRect _t_leftContainer;
    NSString *_t_selectedInstrumentUUID;
    BOOL _t_ui_lowerDisplay_hidden;
    BOOL _t_ui_instruments_hidden;
    BOOL _t_ui_eventInspector_hidden;
    float _t_ui_dualSliderValue;
    double _t_inspectionTimeInSeconds;
    int _ui_record_state;
    int _ui_pause_state;
    BOOL _ui_loop_state;
    BOOL _ui_restart_state;
    int _ui_flag_state;
    BOOL _ui_flag_can_select_next;
    BOOL _ui_flag_can_select_previous;
    int _ui_range_state;
    int _ui_layout_state;
    BOOL _ui_eventInspector_hidden;
    BOOL _ui_lowerDisplay_hidden;
    BOOL _ui_instruments_hidden;
    XRStrategyInfo *_ui_selected_strategy;
    NSArray *_ui_available_strategies;
    XRBusyModel *_busyModel;
    BOOL _openDetailViewAfterRecording;
    BOOL _isClosingDocument;
    PFTProcess *_defaultProcess;
    NSString *_uuid;
    long long _selectedRunNumber;
    NSWindow *_progressWindow;
    BOOL _ignoreExtraSelection;
    BOOL _flagTableDeferReload;
    BOOL _observingDisplayedFlags;
    NSString *_t_selected_strategy;
    double _lastInspectorWidth;
    unsigned int _runningTraceConnectionUUID;
    id _strategyStateToRestore;
    PFTWindowController *_mainWindowController;
    XRInstrumentDebuggerWindowController *_debuggerWindowController;
    BOOL _loopEnabled;
    BOOL _closingDocument;
    BOOL _autoRestartEnabled;
    int _recordingState;
    int _pauseState;
    int _msgTracerCreationSource;
    int _ui_default_target_type_in_chooser;
    XRDevice *_targetDevice;
    NSString *_timeString;
    unsigned long long _recordingHeadTime;
    NSArray *_availableStrategies;
    PFTSelectedInstrumentDataElementList *_instrumentInspectorModel;
    XRSelectedInstrumentConfigurationDataElementList *_instrumentConfigurationModel;
    PFTSelectedInstrumentList *_selectedInstruments;
    NSViewAnimation *_eventViewerAnimation;
    long long _currentRunNumber;
}

+ (BOOL)isAnimationRunning;
+ (void)setAnimationRunning:(BOOL)arg1;
+ (void)setPreservedLastDevice:(id)arg1;
+ (id)keyPathsForValuesAffectingDefaultTargetTypeForChooser;
+ (BOOL)runningAsAppleInternal;
+ (void)restoreRecentTarget:(id)arg1;
+ (id)mostRecentDocument;
+ (id)documentWithUUID:(id)arg1;
+ (void)initialize;
@property(nonatomic) long long currentRunNumber; // @synthesize currentRunNumber=_currentRunNumber;
@property int ui_default_target_type_in_chooser; // @synthesize ui_default_target_type_in_chooser=_ui_default_target_type_in_chooser;
@property(retain) NSViewAnimation *eventViewerAnimation; // @synthesize eventViewerAnimation=_eventViewerAnimation;
@property(readonly) PFTSelectedInstrumentList *selectedInstruments; // @synthesize selectedInstruments=_selectedInstruments;
@property(readonly) XRSelectedInstrumentConfigurationDataElementList *instrumentConfigurationModel; // @synthesize instrumentConfigurationModel=_instrumentConfigurationModel;
@property(readonly) PFTSelectedInstrumentDataElementList *instrumentInspectorModel; // @synthesize instrumentInspectorModel=_instrumentInspectorModel;
@property int msgTracerCreationSource; // @synthesize msgTracerCreationSource=_msgTracerCreationSource;
@property(retain, nonatomic) NSArray *availableStrategies; // @synthesize availableStrategies=_availableStrategies;
@property(nonatomic, getter=isAutoRestartEnabled) BOOL autoRestartEnabled; // @synthesize autoRestartEnabled=_autoRestartEnabled;
@property(nonatomic) unsigned long long recordingHeadTime; // @synthesize recordingHeadTime=_recordingHeadTime;
@property(nonatomic, getter=isClosingDocument) BOOL closingDocument; // @synthesize closingDocument=_closingDocument;
@property(retain, nonatomic) XRBusyModel *busyModel; // @synthesize busyModel=_busyModel;
@property(copy, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(retain) XRDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain) PFTProcess *defaultProcess; // @synthesize defaultProcess=_defaultProcess;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic, getter=isLoopEnabled) BOOL loopEnabled; // @synthesize loopEnabled=_loopEnabled;
@property(nonatomic) int pauseState; // @synthesize pauseState=_pauseState;
@property(nonatomic) int recordingState; // @synthesize recordingState=_recordingState;
- (void).cxx_destruct;
- (id)dataElementsForContext:(id)arg1;
- (void)setMainWindowDisplayedStrategy:(id)arg1;
- (id)mainWindowDisplayedStrategy;
- (id)objectInScriptableInstrumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfScriptableInstruments;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeFlags:(id)arg1;
- (void)unregisterFlags:(id)arg1;
- (void)registerFlags:(id)arg1;
- (void)setTargetsDevice:(id)arg1;
- (int)defaultTargetTypeForChooser;
- (BOOL)supportsTargetType:(int)arg1;
- (id)currentTargetDevice;
- (id)currentTargetProcess;
- (void)setTargetsInstrumentSpecific;
- (void)setTargetsAllProcesses;
- (void)setTargetsExistingProcess:(id)arg1;
- (void)setTargetsLaunchedProcess:(id)arg1;
- (void)_setTargetType:(int)arg1 withProcess:(id)arg2 device:(id)arg3 preserve:(BOOL)arg4;
- (void)_xrayReportError:(id)arg1;
- (void)_addInstrument:(id)arg1;
- (void)_createInstrument:(id)arg1;
- (void)replaceType:(id)arg1 withType:(id)arg2;
- (void)refreshedInstrumentType:(id)arg1;
- (void)attachInstrumentType:(id)arg1 toProcess:(id)arg2;
- (void)newInstrumentType:(id)arg1;
- (id)mainWindowController;
- (void)setDriver:(id)arg1;
- (void)showInstrumentHelp:(id)arg1;
- (id)panel:(id)arg1 userEnteredFilename:(id)arg2 confirmed:(BOOL)arg3;
- (void)_handleDocumentFileChanges:(id)arg1;
- (void)showRuns:(id)arg1;
- (void)forwardHistory:(id)arg1;
- (void)backHistory:(id)arg1;
- (void)traceNewCall:(id)arg1;
- (void)exportData:(id)arg1;
- (void)exportPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)saveAsPublicTemplate:(id)arg1;
- (void)toggleSpinMonitor:(id)arg1;
- (void)increaseDeckSize:(id)arg1;
- (void)decreaseDeckSize:(id)arg1;
- (void)setDisplayContext:(id)arg1 visible:(BOOL)arg2;
- (BOOL)isDisplayContextVisible:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)showSymbolSheet;
- (void)_initializeSymbolInspector;
- (void)openDetailView;
- (void)_openDetailViewNotification:(id)arg1;
- (void)setMiniToolbarVisible:(BOOL)arg1;
- (void)toggleLoopReplay:(id)arg1;
- (void)pauseTrace:(id)arg1;
- (void)recordTrace;
- (void)_recordTraceStarted:(BOOL)arg1;
- (void)toggleRecording:(id)arg1;
- (void)toggleRecordIfPossible;
- (BOOL)chooseExecutableAsDefaultTarget;
- (void)choosePidAsDefaultTarget;
- (void)buildNewInstrument:(id)arg1;
- (void)rangeAction:(id)arg1;
- (void)clearSelectedTimeRange:(id)arg1;
- (void)setTimeRangeEnd:(id)arg1;
- (void)setTimeRangeStart:(id)arg1;
- (void)_setEndTimeRange:(unsigned long long)arg1;
- (void)_setStartTimeRange:(unsigned long long)arg1;
@property(nonatomic) long long selectedRunNumber;
- (void)deleteRunNumber:(long long)arg1;
- (void)synthesizeRunForImportRunNumber:(long long)arg1;
- (void)_instrumentControlsRefreshed:(id)arg1;
- (void)_instrumentUnselected:(id)arg1;
- (void)_instrumentChangedSetupView:(id)arg1;
- (void)showSelfServiceDebugger:(id)arg1;
- (void)_runChanged:(id)arg1;
- (void)_selectedCoresChanged:(id)arg1;
- (void)_selectedThreadsChanged:(id)arg1;
- (void)_instrumentChangedSearchView:(id)arg1;
- (void)_instrumentChangedNavigationView:(id)arg1;
- (void)_instrumentChangedDetailView:(id)arg1;
- (void)_instrumentStateChanged:(id)arg1;
- (id)ui_selected_strategy;
- (void)setUi_selected_strategy:(id)arg1;
- (void)setStrategy:(id)arg1 withInfo:(id)arg2;
- (void)_updateSupportedStrategies;
- (id)reasonForNotBeingAbleToRecord;
- (void)validateUIState;
- (void)validateControls;
- (void)_validateControlsMainThreadCallback;
- (BOOL)isUITransforming;
- (void)_spinDetected:(id)arg1;
- (BOOL)displayEnabled;
- (void)moveToNextRun:(id)arg1;
- (void)moveToPreviousRun:(id)arg1;
- (void)analysisProgressDidChange;
- (void)_uiReplayCompleted:(id)arg1;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (struct XRTimeRange)selectedTimeRange;
- (void)clearSelectedTimeRange;
- (unsigned long long)inspectionTime;
- (void)inspectFlag:(id)arg1;
- (void)showFlagTable:(id)arg1;
- (void)setInspectionTime:(unsigned long long)arg1;
- (BOOL)isRecordingMasterTrack;
- (void)endRecordingMasterTrack;
- (BOOL)startRecordingMasterTrack;
- (void)moveToPreviousRun;
- (void)moveToNextRun;
- (void)_modifySelectedRunIndex:(BOOL)arg1;
- (BOOL)isRunning;
- (void)endRun;
- (BOOL)startRun;
- (BOOL)allInstrumentsSupportTargetType:(int)arg1;
- (void)zoomOut;
- (void)zoomIn;
- (void)snapTrackViewToFit;
- (void)_didEndCommand:(id)arg1;
- (void)_willEndCommand:(id)arg1;
- (void)_didStartCommand:(id)arg1;
- (void)closeDetailView;
- (void)_willStartCommand:(id)arg1;
- (void)_tick:(id)arg1;
- (void)_setTimeForStart:(double)arg1 end:(double)arg2;
- (void)_strategyFilterUpdateNotification:(id)arg1;
- (id)baseFilterForRunNumber:(long long)arg1 tableID:(unsigned int)arg2;
- (id)selectedInstrument;
- (id)trace;
- (id)masterInstrument;
- (id)basicInstruments;
- (void)displaySymbolInSource:(id)arg1 withConcreteSymbol:(id)arg2 withMarkerAtLine:(id)arg3 withCallTreeInformation:(id)arg4;
- (void)displayStackFrameInSource:(id)arg1;
- (id)iconForContext:(id)arg1;
- (void)displayContext:(id)arg1;
- (void)_openDataView;
- (void)_appDidChangeScreenParametersNotification:(id)arg1;
- (void)showWindows;
- (id)windowForSheet;
- (id)mainWindow;
- (void)makeWindowControllers;
- (void)restoreDocumentWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)close;
- (void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (BOOL)prepareBlankDocumentWithTitle:(id)arg1 error:(id *)arg2;
- (BOOL)prepareBlankDocument:(id *)arg1;
- (void)restoreWithTemplateData:(id)arg1;
- (id)templateData;
- (id)templateAction;
- (void)setTemplateAction:(id)arg1;
- (BOOL)prepareSavePanel:(id)arg1;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (id)displayName;
- (void)_resetNameAndType;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)originalURL;
- (void)setOriginalURL:(id)arg1;
- (void)_initialProcessSelectionCallback:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_traceDidAwake;
- (void)handleDeviceNotification:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRAnalysisCoreProjectionViewController : NSViewController <NSOutlineViewDelegate, NSOutlineViewDataSource, DTRenderableContentProviderDelegate>
{
    NSScrollView *_outlineScrollView;
    XRAnalysisCoreOutlineView *_outlineView;
    XRActionContext *_actionContext;
    XRAnalysisCoreProjectionViewContent *_viewsAbstractContent;
    NSArray *_sortDescriptors;
    XRAnalysisCoreRollUpItemSet *_expandedSet;
    XRAnalysisCoreRollUpItemSet *_selectedSet;
    XRTokenizedTextFilterSpecification *_outlineColumnFilterSpec;
    struct DTRenderableContentResponse *__response;
    struct DTRenderableContentResponse *_stagedResponse;
    XRAnalysisCoreProjectionContentProvider *_provider;
    BOOL _responseStale;
    BOOL _responseMustBeStaged;
    BOOL _forceRefreshOnNextUpdate;
    XRAnalysisCoreRollUpItem *_focusedItem;
    NSString *_focusedName;
    XRAnalysisCoreTableQuery *_focusFilter;
}

@property(readonly, nonatomic) XRAnalysisCoreTableQuery *focusFilter; // @synthesize focusFilter=_focusFilter;
@property(readonly, nonatomic) NSString *focusedName; // @synthesize focusedName=_focusedName;
@property(readonly, nonatomic) XRAnalysisCoreRollUpItem *focusedItem; // @synthesize focusedItem=_focusedItem;
- (void).cxx_destruct;
- (void)filterDetailWithTokens:(id)arg1 context:(id)arg2 matchesAny:(BOOL)arg3;
- (void)outlineView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (void)restoreUIState:(id)arg1;
- (void)saveUIState:(id)arg1;
- (void)_mainThreadAdaptOutline:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (id)_requestFromAbstract:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)objectValueForTableColumn:(id)arg1 byItem:(id)arg2;
- (id)_objectValueForTableColumnIdentifier:(id)arg1 response:(struct DTRenderableContentResponse *)arg2 projector:(id)arg3 cursor:(struct XRAnalysisCoreProjectionCursor *)arg4 item:(id)arg5;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)providerHasNewResponse:(id)arg1;
- (void)_handleNewResponse:(struct DTRenderableContentResponse *)arg1;
- (void)_syncOutlineSelectionExpansionState;
- (void)refresh;
- (void)_prepareFocusChange:(id)arg1;
- (void)viewWillLayout;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)loadView;
- (void)copy:(id)arg1;
- (void)_retrieveResponse;
- (void)_submitRequest:(id)arg1 shortDescription:(id)arg2 longDescription:(id)arg3;
- (struct DTRenderableContentResponse *)_lastResponse;
- (struct DTRenderableContentResponse *)_currentResponse;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRAnalysisCoreProjectionViewContent : XRAnalysisCoreDetailViewContent
{
    unsigned char _backtraceDim;
    unsigned char _threadDim;
    unsigned char _categoryDim;
    BOOL _hasOnFocusDetail;
    XRAnalysisCoreUIProjectionDetailSpec *_spec;
    NSArray *_projectorHierarchy;
    NSString *_categoryDimName;
}

@property(nonatomic) BOOL hasOnFocusDetail; // @synthesize hasOnFocusDetail=_hasOnFocusDetail;
@property(copy, nonatomic) NSString *categoryDimName; // @synthesize categoryDimName=_categoryDimName;
@property(nonatomic) unsigned char categoryDim; // @synthesize categoryDim=_categoryDim;
@property(nonatomic) unsigned char threadDim; // @synthesize threadDim=_threadDim;
@property(nonatomic) unsigned char backtraceDim; // @synthesize backtraceDim=_backtraceDim;
@property(copy, nonatomic) NSArray *projectorHierarchy; // @synthesize projectorHierarchy=_projectorHierarchy;
@property(retain, nonatomic) XRAnalysisCoreUIProjectionDetailSpec *spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end

@interface XRAnalysisCoreProjectionContentProvider : DTRenderableContentProvider
{
}

+ (BOOL)providesProgress;
- (void)fulfillRequest:(id)arg1 responseContainer:(id)arg2 group:(id)arg3;

@end

@interface XRAnalysisCoreProjectionContentRequest : NSObject
{
    XRAnalysisCoreProjectionViewContent *_abstractContent;
    XREngineeringTypeFormatter *_formatter;
    NSArray *_sortDescriptors;
    XRTokenizedTextFilterSpecification *_outlineColumnFilter;
    XRAnalysisCoreProjectionRendableContent *_lastRendableContent;
}

@property(retain, nonatomic) XRAnalysisCoreProjectionRendableContent *lastRendableContent; // @synthesize lastRendableContent=_lastRendableContent;
@property(retain, nonatomic) XRTokenizedTextFilterSpecification *outlineColumnFilter; // @synthesize outlineColumnFilter=_outlineColumnFilter;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) XREngineeringTypeFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) XRAnalysisCoreProjectionViewContent *abstractContent; // @synthesize abstractContent=_abstractContent;
- (void).cxx_destruct;

@end

@interface XRAnalysisCoreProjectionRendableContent : NSObject
{
    XRAnalysisCoreProjectionViewContent *_abstractContent;
    XRAnalysisCoreRollUpController *_rollUpController;
    XREngineeringTypeFormatter *_formatter;
    XRAnalysisCoreRollUpChangeSequence *_changes;
}

@property(retain, nonatomic) XRAnalysisCoreRollUpChangeSequence *changes; // @synthesize changes=_changes;
@property(retain, nonatomic) XREngineeringTypeFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) XRAnalysisCoreRollUpController *rollUpController; // @synthesize rollUpController=_rollUpController;
@property(retain, nonatomic) XRAnalysisCoreProjectionViewContent *abstractContent; // @synthesize abstractContent=_abstractContent;
- (void).cxx_destruct;

@end

@interface XRAnalysisCoreOutlineView : NSOutlineView
{
}

@end

@interface XRLibraryToolbarItem : XRToolbarItem
{
}

- (void)disconnectFromContext;
- (void)connectToContext:(id)arg1;
- (id)_createLibrarySegmentedControl;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

@interface XRSourceCommentAnnotation : DVTMessageBubbleAnnotation
{
    NSArray *_dataElements;
}

@property(retain) NSArray *dataElements; // @synthesize dataElements=_dataElements;
- (void).cxx_destruct;
- (double)preferredWidthForAvailableWidth:(double)arg1;

@end

@interface XRSourceCommentAnnotationProvider : DVTAnnotationProvider <DVTMessageBubbleAnnotationDelegate, XRCommentObserver, XRInspectorSource>
{
    XRSourceCommentAnnotation *_selectedAnnotation;
    XRTextView *_textView;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)documentUUID;
- (id)dataElementsForInspector:(id)arg1;
- (void)inspectorDismissed:(id)arg1;
- (void)didClickMessageBubbleForAnnotation:(id)arg1 onIcon:(BOOL)arg2 inTextView:(id)arg3 event:(id)arg4;
- (struct CGRect)_locationOfAnnotation:(id)arg1 inTextView:(id)arg2;
- (void)_createAnnotationAtLine:(unsigned long long)arg1 withCommentList:(id)arg2 displayType:(int)arg3;
- (id)_themeForComments:(id)arg1;
- (id)_descriptionForComments:(id)arg1 displayType:(int)arg2;
- (BOOL)_isOnlyMarker:(id)arg1;
- (void)commentsWereUpdated:(id)arg1 displayType:(int)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRPauseResumeToolbarItem : XRToolbarItem
{
}

- (void)disconnectFromContext;
- (void)connectToContext:(id)arg1;
- (id)_createPre1010Control;
- (id)_create1010AndLaterControl;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

@interface XRTerminationFriendlyPanel : NSPanel
{
}

- (BOOL)_blocksActionWhenModal:(SEL)arg1;

@end

@interface PFTWindow : NSWindow
{
}

- (void)cancelOperation:(id)arg1;
- (void)setContentView:(id)arg1;

@end

@interface PFTPanel : NSPanel
{
}

- (void)becomeKeyWindow;
- (void)resignKeyWindow;

@end

@interface XRSelectedInstrumentConfigurationDataElementList : PFTDataElementList
{
    PFTSelectedInstrumentList *_selectedInstrumentList;
    PFTTraceDocument *_traceDocument;
}

@property __weak PFTTraceDocument *traceDocument; // @synthesize traceDocument=_traceDocument;
- (void).cxx_destruct;
- (void)_instrumentUnselected:(id)arg1;
- (void)_instrumentUpdated:(id)arg1;
- (void)_instrumentSelected:(id)arg1;
@property(retain) PFTSelectedInstrumentList *selectedInstrumentList; // @synthesize selectedInstrumentList=_selectedInstrumentList;
- (void)dealloc;

@end

@interface XREngineeringTypeSortDescriptor : NSSortDescriptor <XRAnalysisCoreSortDescriptor>
{
    struct XRIntKeyedDictionary *_sigMapsByEtype;
}

- (void).cxx_destruct;
- (long long)compareObject:(id)arg1 toObject:(id)arg2;
- (void)sortDidFinish;
- (void)sortWillBegin;
- (id)initWithTrace:(id)arg1 runNumber:(long long)arg2 columnIdentifier:(id)arg3 ascending:(BOOL)arg4;

@end

@interface PFTDataViewer : NSView <DVTChooserViewDelegate, PFTDataViewDelegate>
{
    DVTChooserView *_chooserView;
    BOOL _isSetup;
    PFTDataElementList *_instrumentSetupModel;
    PFTDataElementList *_instrumentInspectorModel;
    PFTDataElementList *_eventInspectorModel;
    NSMapTable *_placeholderMessageForDataViewMapTable;
    PFTDataView *_instrumentSetupDataView;
    PFTDataView *_instrumentInspectorDataView;
    PFTDataView *_eventInspectorDataView;
    NSTextField *_placeholderLabel;
    NSTabView *_tabView;
}

@property __weak NSTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) NSTextField *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property __weak PFTDataView *eventInspectorDataView; // @synthesize eventInspectorDataView=_eventInspectorDataView;
@property __weak PFTDataView *instrumentInspectorDataView; // @synthesize instrumentInspectorDataView=_instrumentInspectorDataView;
@property __weak PFTDataView *instrumentSetupDataView; // @synthesize instrumentSetupDataView=_instrumentSetupDataView;
- (void).cxx_destruct;
- (void)stopDisplayingMessageForDataView:(id)arg1;
- (void)dataView:(id)arg1 shouldDisplayMessage:(id)arg2;
- (void)_reload;
- (void)chooserView:(id)arg1 userDidSelectChoices:(id)arg2;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)showEventInspectorDataView;
- (void)showInstrumentInspectorDataView;
- (void)showInstrumentSetupDataView;
- (void)_showDataViewAtIndex:(unsigned long long)arg1;
@property(retain) PFTDataElementList *eventInspectorModel; // @synthesize eventInspectorModel=_eventInspectorModel;
@property(retain) PFTDataElementList *instrumentInspectorModel; // @synthesize instrumentInspectorModel=_instrumentInspectorModel;
@property(retain) PFTDataElementList *instrumentSetupModel; // @synthesize instrumentSetupModel=_instrumentSetupModel;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)isOpaque;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRFileExplorerViewController : NSViewController <XRTopicInterfaceComponent>
{
    BOOL _ignoreDirectPathEntry;
    XRTopic *_subTopic;
    NSBrowser *_browser;
    XRDeviceTopic *_topic;
    id <XRFileSystem> _fileSystem;
}

@property(readonly, nonatomic) id <XRFileSystem> fileSystem; // @synthesize fileSystem=_fileSystem;
@property(readonly, nonatomic) XRDeviceTopic *topic; // @synthesize topic=_topic;
@property(nonatomic) __weak NSBrowser *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) XRTopic *subTopic; // @synthesize subTopic=_subTopic;
- (void).cxx_destruct;
- (void)_selectItemAtPath:(id)arg1 reparentIfNeeded:(BOOL)arg2;
- (void)_selectItemAtPath:(id)arg1;
- (int)topicViewer:(id)arg1 handleKeyDown:(id)arg2;
- (void)refresh;
- (void)reloadData;
- (void)applyResult:(id)arg1;
- (void)select:(id)arg1;
@property(readonly, nonatomic) NSString *filename;
@property(readonly, nonatomic) NSDictionary *selectedItem;
- (id)validateSelection;
- (id)launchOptionsUserInterfaceComponentIdentifier;
- (void)awakeFromNib;
- (id)initWithTopic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface PFTDataView : NSStackView
{
    PFTDataElementList *_model;
    BOOL _dataViewCanResize;
    int _style;
    NSColor *_backgroundColor;
    id <PFTDataViewDelegate> _dataViewDelegate;
}

@property(nonatomic) __weak id <PFTDataViewDelegate> dataViewDelegate; // @synthesize dataViewDelegate=_dataViewDelegate;
- (void).cxx_destruct;
- (unsigned long long)selectedRow;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (int)style;
- (void)setStyle:(int)arg1;
- (void)viewDidMoveToWindow;
- (void)viewDidMoveToSuperview;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)focusOnElement:(id)arg1;
- (void)reloadData;
- (void)_elementsUpdated:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void)dealloc;

@end

__attribute__((visibility("hidden")))
@interface XRScopeBarButtonCell : DVTScopeBarButtonCell
{
}

- (long long)nextState;

@end

__attribute__((visibility("hidden")))
@interface XRSymbolInspectorCustomOutlineView : NSOutlineView
{
    XRProcessAndSymbolOwnerListModel *_symbolOwnerList;
}

- (BOOL)performKeyEquivalent:(id)arg1;
- (void)setSymbolOwnerList:(id)arg1;

@end

@interface XRSymbolInspectorViewController : XRUIViewController <NSOutlineViewDelegate, NSOutlineViewDataSource, XRUIModelChangeObserver>
{
    BOOL _initializingModel;
    BOOL _checkNeedToExpandSingleProcess;
    BOOL _binaryAnddsymViewsAreUninitialized;
    BOOL _showingBinaryPathContainer;
    BOOL _showingdSYMPathText;
    struct _XRDSYMObserverID *_downloadObserverRef;
    BOOL _startingDSYMDownload;
    XRSymbolOwnerListLimiter *_symbolicationLimiter;
    NSMutableSet *_retainedPaths;
    NSMutableArray *_selectedUUIDs;
    NSMutableSet *_expandedUUIDs;
    NSSet *_selectedSymbolOwners;
    DVTBorderedView *_mainBox;
    DVTBorderedView *_filterSearchBox;
    DVTBorderedView *_tableBox;
    DVTSearchField *_textRestrictionFilterView;
    NSView *_restrictionView;
    DVTScopeBarButton *_executableRestrictionButton;
    DVTScopeBarButton *_incompleteRestrictionButton;
    XRSymbolInspectorCustomOutlineView *_symbolOwnerOutline;
    NSTextField *_nameView;
    NSTextField *_uuidView;
    NSTextField *_archView;
    NSProgressIndicator *_statusSpinner;
    NSTextField *_statusText;
    NSButton *_doneButton;
    NSButton *_locateBinaryButton;
    NSButton *_locatedsymButton;
    NSTextField *_downloaddSYMStatusText;
    NSButton *_downloaddSYMButton;
    NSView *_rightContainer;
    NSView *_archContainer;
    NSView *_binaryPathContainer;
    NSView *_binaryLocateContainer;
    NSView *_dsymPathContainer;
    NSView *_dsymLocateContainer;
    NSTextField *_binaryPathText;
    NSTextField *_dsymPathText;
    NSButton *_binaryPathFolder;
    NSButton *_dsymPathFolder;
    NSMenuItem *_showKernelLibrariesMenuItem;
    NSMenuItem *_downloadsSubMenuItem;
    NSMenuItem *_resumeDownloadsMenuItem;
    NSMenuItem *_pauseDownloadsMenuItem;
    NSMenuItem *_cancelDownloadsMenuItem;
}

+ (void)initialize;
@property NSMenuItem *cancelDownloadsMenuItem; // @synthesize cancelDownloadsMenuItem=_cancelDownloadsMenuItem;
@property NSMenuItem *pauseDownloadsMenuItem; // @synthesize pauseDownloadsMenuItem=_pauseDownloadsMenuItem;
@property NSMenuItem *resumeDownloadsMenuItem; // @synthesize resumeDownloadsMenuItem=_resumeDownloadsMenuItem;
@property NSMenuItem *downloadsSubMenuItem; // @synthesize downloadsSubMenuItem=_downloadsSubMenuItem;
@property NSMenuItem *showKernelLibrariesMenuItem; // @synthesize showKernelLibrariesMenuItem=_showKernelLibrariesMenuItem;
@property NSButton *dsymPathFolder; // @synthesize dsymPathFolder=_dsymPathFolder;
@property NSButton *binaryPathFolder; // @synthesize binaryPathFolder=_binaryPathFolder;
@property NSTextField *dsymPathText; // @synthesize dsymPathText=_dsymPathText;
@property NSTextField *binaryPathText; // @synthesize binaryPathText=_binaryPathText;
@property(retain) NSView *dsymLocateContainer; // @synthesize dsymLocateContainer=_dsymLocateContainer;
@property(retain) NSView *dsymPathContainer; // @synthesize dsymPathContainer=_dsymPathContainer;
@property(retain) NSView *binaryLocateContainer; // @synthesize binaryLocateContainer=_binaryLocateContainer;
@property(retain) NSView *binaryPathContainer; // @synthesize binaryPathContainer=_binaryPathContainer;
@property NSView *archContainer; // @synthesize archContainer=_archContainer;
@property NSView *rightContainer; // @synthesize rightContainer=_rightContainer;
@property NSButton *downloaddSYMButton; // @synthesize downloaddSYMButton=_downloaddSYMButton;
@property NSTextField *downloaddSYMStatusText; // @synthesize downloaddSYMStatusText=_downloaddSYMStatusText;
@property NSButton *locatedsymButton; // @synthesize locatedsymButton=_locatedsymButton;
@property NSButton *locateBinaryButton; // @synthesize locateBinaryButton=_locateBinaryButton;
@property NSButton *doneButton; // @synthesize doneButton=_doneButton;
@property NSTextField *statusText; // @synthesize statusText=_statusText;
@property NSProgressIndicator *statusSpinner; // @synthesize statusSpinner=_statusSpinner;
@property NSTextField *archView; // @synthesize archView=_archView;
@property NSTextField *uuidView; // @synthesize uuidView=_uuidView;
@property NSTextField *nameView; // @synthesize nameView=_nameView;
@property XRSymbolInspectorCustomOutlineView *symbolOwnerOutline; // @synthesize symbolOwnerOutline=_symbolOwnerOutline;
@property DVTScopeBarButton *incompleteRestrictionButton; // @synthesize incompleteRestrictionButton=_incompleteRestrictionButton;
@property DVTScopeBarButton *executableRestrictionButton; // @synthesize executableRestrictionButton=_executableRestrictionButton;
@property NSView *restrictionView; // @synthesize restrictionView=_restrictionView;
@property DVTSearchField *textRestrictionFilterView; // @synthesize textRestrictionFilterView=_textRestrictionFilterView;
@property DVTBorderedView *tableBox; // @synthesize tableBox=_tableBox;
@property DVTBorderedView *filterSearchBox; // @synthesize filterSearchBox=_filterSearchBox;
@property DVTBorderedView *mainBox; // @synthesize mainBox=_mainBox;
@property(readonly, nonatomic) NSSet *selectedSymbolOwners; // @synthesize selectedSymbolOwners=_selectedSymbolOwners;
- (void).cxx_destruct;
- (void)reloadSymbolOwnerOutlineView;
- (id)populatedViewForSymbolOwnerPath:(id)arg1;
- (long long)numberOfSymbolOwnersUnderIndexPath:(id)arg1;
- (id)selectedSymbolOwnerElementsFromOutline:(id)arg1;
- (id)selectedSymbolOwnerPathsFromOutline:(id)arg1;
- (void)_executeSymbolOwnerAction:(SEL)arg1 bySelectingSymbolOwners:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewSelectionIsChanging:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (double)_calculateIdealHeightForString:(id)arg1 font:(id)arg2 maxSize:(struct CGSize)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)_refreshOptionsMenu;
- (void)_refreshStatusText;
- (void)_cancelDownload:(id)arg1;
- (void)_bumpDownloadPriority:(id)arg1;
- (void)_refreshSymbolOwnerTextViews;
- (void)_refreshRestrictionButtons;
- (void)fullRedisplay;
- (void)loadView;
- (void)modelDidChange:(id)arg1;
- (void)finishRefreshingModel;
- (void)startRefreshingModel;
- (id)textFilterString;
- (void)setRestrictionState:(id)arg1;
- (id)restrictionSet;
- (void)_enumerateRestrictionButtons:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) XRProcessAndSymbolOwnerListModel *displayedSymbolOwnerHierarchy;
@property(readonly, nonatomic) XRProcessAndSymbolOwnerListModel *inputSymbolOwnerHierarchy;
- (void)_downloadsWereResumed;
- (void)_downloadsWerePaused;
- (void)_removedDSYMForUUID:(id)arg1 atURL:(id)arg2;
- (void)_addedDSYMForUUID:(id)arg1 atURL:(id)arg2;
- (void)_downloadCancelledDSYMForUUID:(id)arg1 atURL:(id)arg2;
- (void)_downloadCompletedForUUID:(id)arg1 atURL:(id)arg2;
- (void)_downloadStartedForUUID:(id)arg1;
- (void)downloaddSYMClick:(id)arg1;
- (void)locateBinaryClick:(id)arg1;
- (void)locatedSYMClick:(id)arg1;
- (void)doneButtonClick:(id)arg1;
- (void)textFilterAction:(id)arg1;
- (void)_updateDSYMContainer:(BOOL)arg1 binaryContainer:(BOOL)arg2;
- (void)restrictionButtonClick:(id)arg1;
- (void)cancelDownloadsClick:(id)arg1;
- (void)pauseDownloadsClick:(id)arg1;
- (void)resumeDownloadsClick:(id)arg1;
- (void)showKernelLibrariesClick:(id)arg1;
- (id)nibBundle;
- (id)nibName;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_commonSetup;
- (void)_setGlobalSearchPaths:(id)arg1;
- (id)_globalSearchPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRDaemonExplorerViewController : XRFileExplorerViewController
{
}

- (id)launchOptionsUserInterfaceComponentIdentifier;

@end

@interface XRDaemonExecOptionsViewController : XRExecOptionsViewController
{
}

- (void)awakeFromNib;

@end

@interface PFTSelectedInstrumentDataElementList : PFTDataElementList
{
    PFTSelectedInstrumentList *_selectedInstrumentList;
    PFTTraceDocument *_traceDocument;
}

- (void).cxx_destruct;
- (id)traceDocument;
- (void)setTraceDocument:(id)arg1;
- (void)_instrumentUnselected:(id)arg1;
- (void)_instrumentUpdated:(id)arg1;
- (void)_instrumentSelected:(id)arg1;
- (id)selectedInstrumentList;
- (void)setSelectedInstrumentList:(id)arg1;
- (void)dealloc;

@end

@interface PFTSelectedEventDataElementList : PFTDataElementList
{
    PFTTraceDocument *_traceDocument;
}

- (void).cxx_destruct;
- (id)traceDocument;
- (void)setTraceDocument:(id)arg1;
- (void)_instrumentUnselected:(id)arg1;
- (void)dealloc;

@end

@interface XRSplitViewAnimation : NSAnimation
{
    double _delta;
    double _fromPosition;
    double _toPosition;
}

@property double toPosition; // @synthesize toPosition=_toPosition;
@property double fromPosition; // @synthesize fromPosition=_fromPosition;
@property double delta; // @synthesize delta=_delta;
- (void)setCurrentProgress:(float)arg1;

@end

@interface XRHorizontalFillSplitView : NSSplitView <NSAnimationDelegate>
{
    XRSplitViewAnimation *_animation;
    BOOL _hideDivider;
}

@property BOOL hideDivider; // @synthesize hideDivider=_hideDivider;
- (void).cxx_destruct;
- (void)animationDidMakeProgress:(id)arg1;
- (void)animateSplitFromPosition:(double)arg1 toPosition:(double)arg2;
- (double)dividerThickness;
- (void)drawDividerInRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface PFTSpinMonitor : NSObject
{
}

+ (id)spinningProcesses;
+ (BOOL)isProcessSpinning:(int)arg1;
+ (void)removeUser;
+ (void)addUser;
+ (BOOL)enabled;
+ (void)setEnabled:(BOOL)arg1;
+ (void)checkInitialize;
+ (void)initialize;

@end

@interface XRDeferredModeViewController : XRNonInteractiveModeViewController
{
    NSTextField *_progressText;
    NSProgressIndicator *_progressView;
    NSTextField *_progressAdditionalText;
}

@property __weak NSTextField *progressAdditionalText; // @synthesize progressAdditionalText=_progressAdditionalText;
@property __weak NSProgressIndicator *progressView; // @synthesize progressView=_progressView;
@property __weak NSTextField *progressText; // @synthesize progressText=_progressText;
- (void).cxx_destruct;
- (void)_setProgressMessage:(id)arg1 additionalMessage:(id)arg2;
- (void)_setProgressCompletion:(double)arg1;
- (void)viewDidLoad;
- (id)init;

@end

@interface XRToolbarManager : NSObject <XRToolbarManager>
{
    XRToolbar *_toolbar;
    NSString *_documentIdentifer;
    NSToolbarItem *_libraryToolbarItem;
}

+ (id)toolbarManagerWithIdentifier:(id)arg1 window:(id)arg2 documentIdentifier:(id)arg3;
@property(retain, nonatomic) NSToolbarItem *libraryToolbarItem; // @synthesize libraryToolbarItem=_libraryToolbarItem;
@property(copy) NSString *documentIdentifer; // @synthesize documentIdentifer=_documentIdentifer;
@property(retain) XRToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (void).cxx_destruct;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
@property(readonly, nonatomic) NSView *libraryButton;
- (id)initWithToolbar:(id)arg1 documentIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface PFTLegacySearchTokenTextFieldCell : NSTokenFieldCell
{
}

- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;

@end

@interface PFTClearSearchButtonCell : NSButtonCell
{
}

- (void)_fillBackground:(struct CGRect)arg1 withAlternateColor:(BOOL)arg2;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)isOpaque;

@end

@interface PFTLegacySearchTokenTextField : NSTokenField <NSTokenFieldDelegate>
{
    NSMenuItem *_selectedMenuItem;
    NSButton *_buttonWithMenu;
    NSButton *_clearSearchControl;
    BOOL _matchesAny;
    NSCharacterSet *_invalidCharacters;
    id <XRFilteredDataSource> _filterTarget;
}

+ (void)initialize;
@property(nonatomic) __weak id <XRFilteredDataSource> filterTarget; // @synthesize filterTarget=_filterTarget;
- (void).cxx_destruct;
- (id)tokenField:(id)arg1 shouldUseDrawingAttributes:(id)arg2 forRepresentedObject:(id)arg3;
- (void)setObjectValue:(id)arg1;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (void)_clearSearchField:(id)arg1;
- (void)_searchFieldChanged:(id)arg1;
- (void)_handleSearchFieldChanged;
- (void)_updateInstrumentForSearchFieldChanges;
- (void)viewDidMoveToWindow;
- (void)passFilterToTarget;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)searchMenuSelect:(id)arg1;
- (void)updateMenuAndFilterTarget;
- (void)resetCursorRects;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)_setup;
- (void)_buttonWithMenuClicked:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

#endif /* InstrumentsKit_framework1_h */
