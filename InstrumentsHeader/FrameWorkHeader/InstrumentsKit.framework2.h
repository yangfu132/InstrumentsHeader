//
//  InstrumentsKit.framework2.h
//  MacDemo
//
//  Created by szzc on 2016/11/25.
//  Copyright © 2016年 szzc. All rights reserved.
//

#ifndef InstrumentsKit_framework2_h
#define InstrumentsKit_framework2_h

@interface XRAction : NSObject
{
    NSString *_identifier;
    id _handler;
    NSString *_targetClassType;
    NSString *_targetProtocolType;
    NSString *_displayName;
    NSString *_actionSelector;
    BOOL _appleInternal;
    unsigned short _etype;
}

+ (id)createActionWithActionElement:(id)arg1 handler:(id)arg2;
@property(nonatomic) unsigned short etype; // @synthesize etype=_etype;
@property(nonatomic) BOOL appleInternal; // @synthesize appleInternal=_appleInternal;
@property(copy, nonatomic) NSString *actionSelector; // @synthesize actionSelector=_actionSelector;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *targetProtocolType; // @synthesize targetProtocolType=_targetProtocolType;
@property(copy, nonatomic) NSString *targetClassType; // @synthesize targetClassType=_targetClassType;
@property(retain, nonatomic) id handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)displayNameForInContext:(id)arg1 targets:(id)arg2;
- (BOOL)validateWithTargets:(id)arg1 context:(id)arg2;
- (void)dispatchActionForTargets:(id)arg1 context:(id)arg2;
- (SEL)action;
- (long long)displayNameCompare:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 handler:(id)arg2 targetClassType:(id)arg3 targetProtocolType:(id)arg4 displayName:(id)arg5 actionSelector:(id)arg6 appleInternal:(BOOL)arg7;

@end

@interface XRActionContextManager : NSObject
{
    NSMutableArray *_actions;
    NSMutableDictionary *_classTargetedActions;
    NSMutableDictionary *_protocolTargetActions;
    XRIntKeyedDictionary *_etypeActions;
    NSMutableArray *_universalEtypeActions;
}

+ (void)dispatchActionWithIdentifier:(id)arg1 targets:(id)arg2 context:(id)arg3;
+ (id)sharedContextManager;
+ (void)initializePlugIns:(id)arg1;
+ (id)_actionHandlerWithExtension:(id)arg1;
- (void).cxx_destruct;
- (id)actionsForEngineeringType:(unsigned short)arg1;
- (id)actionWithIdentifier:(id)arg1;
- (id)actionsForClassName:(id)arg1;
- (id)actionsForPrototype:(id)arg1;
- (void)addAction:(id)arg1;
- (id)init;

@end

@interface XRActionHandler : NSObject
{
    DVTExtension *_extension;
}

+ (id)actionHandlerWithExtension:(id)arg1;
@property(retain, nonatomic) DVTExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (id)displayNameForAction:(id)arg1 targets:(id)arg2 context:(id)arg3;
- (BOOL)validateAction:(id)arg1 targets:(id)arg2 context:(id)arg3;

@end

@interface XRAnalysisCoreValueAction : XRAction
{
}

+ (id)createActionWithEtypeActionElement:(id)arg1 handler:(id)arg2;
- (id)initWithIdentifier:(id)arg1 handler:(id)arg2 engineeringType:(unsigned short)arg3 displayName:(id)arg4 actionSelector:(id)arg5 appleInternal:(BOOL)arg6;

@end

@interface PFTWindowController : NSWindowController <NSWindowDelegate, XRContextContainer, DTTimelineGraphDelegate, XRLazyKVOResponder>
{
    BOOL _strategyToolbarOpen;
    BOOL _inTimeSelectionGesture;
    XRCallTreeCompareBarViewController *_callTreeCompareBarViewController;
    NSMapTable *_observationsByContextByObj;
    NSMutableDictionary *_strategyUIControllersByIdentifier;
    XRLazyKVOAdapter *_observationAdapter;
    DTTimelineDecoratedPlane *_flagPlane;
    DTTimelineDecoratedPlane *_inspectionHeadPlane;
    XRFlagDecorator *_flagDecorator;
    XRInspectionHeadDecorator *_inspectionHeadDecorator;
    DTTimelineGroupPlane *_rulerGroupPlane;
    NSMutableDictionary *_archivedStrategyStateByID;
    BOOL _somethingNeedsRefresh;
    BOOL _trackNeedsRefresh;
    BOOL _strategiesNeedRefresh;
    BOOL _strategyToolbarChanged;
    BOOL _detailContextChanged;
    BOOL _flagsNeedRefresh;
    BOOL _windowLayoutNeedsRefresh;
    BOOL _inspectionChanged;
    XRContext *_consoleContext;
    id _keyFlagMonitor;
    NSView *_controlBarView;
    NSView *_inspectorChooserView;
    NSTabView *_inspectorDataViewer;
    XRTimelineGraph *_timelineGraph;
    PFTDataViewer *_instrumentConfigurator;
    PFTDataViewer *_instrumentInspector;
    PFTDataViewer *_eventInspector;
    PFTLegacySearchTokenTextField *_detailSearchField;
    PFTDetailTypeHostView *_detailHost;
    NSView *_navigationView;
    XRContextPathControl *_contextPathControl;
    XRContext *_rootContext;
    XRMainWindowUIState *_state;
    XRRecordingOptionsViewController *_recordingOptionsViewController;
    NSSet *_currentStrategyIdentifiers;
    id <XRToolbarManager> _toolbarManager;
    XRStrategiesToolbarViewController *_strategiesToolbarViewController;
    XRPlaceholderView *_strategyToolbarHost;
    NSView *_normalContentView;
    NSLayoutConstraint *_strategyToolbarHeightConstraint;
    DVTBorderedView *_belowToolbarBorderedView;
    PFTSelectedEventDataElementList *_extendedDetailModel;
    XRSummaryViewController *_summaryViewController;
    XRModalViewController *_windowContentController;
    NSViewController *_interactiveUIController;
    XRNonInteractiveModeViewController *_nonInteractiveUIController;
    NSViewController *_trackViewController;
    NSViewController *_detailViewController;
    NSView *_lhsDetailView;
    NSViewController *_lhsDetailViewController;
    PFTDataViewer *_rhsDetailView;
    NSViewController *_rhsDetailViewController;
    XRConsoleControl *_consoleView;
    XRTrackAndDetailSplitViewController *_trackDetailSplitViewController;
    NSSplitViewController *_detailSplitViewController;
    XRLibraryPopoverViewController *_libraryPopoverViewController;
}

@property(retain, nonatomic) XRLibraryPopoverViewController *libraryPopoverViewController; // @synthesize libraryPopoverViewController=_libraryPopoverViewController;
@property(readonly, nonatomic) NSSplitViewController *detailSplitViewController; // @synthesize detailSplitViewController=_detailSplitViewController;
@property(readonly, nonatomic) XRTrackAndDetailSplitViewController *trackDetailSplitViewController; // @synthesize trackDetailSplitViewController=_trackDetailSplitViewController;
@property(retain, nonatomic) XRConsoleControl *consoleView; // @synthesize consoleView=_consoleView;
@property(readonly, nonatomic) NSViewController *rhsDetailViewController; // @synthesize rhsDetailViewController=_rhsDetailViewController;
@property(retain, nonatomic) PFTDataViewer *rhsDetailView; // @synthesize rhsDetailView=_rhsDetailView;
@property(readonly, nonatomic) NSViewController *lhsDetailViewController; // @synthesize lhsDetailViewController=_lhsDetailViewController;
@property(retain, nonatomic) NSView *lhsDetailView; // @synthesize lhsDetailView=_lhsDetailView;
@property(readonly, nonatomic) NSViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(readonly, nonatomic) NSViewController *trackViewController; // @synthesize trackViewController=_trackViewController;
@property(readonly, nonatomic) XRNonInteractiveModeViewController *nonInteractiveUIController; // @synthesize nonInteractiveUIController=_nonInteractiveUIController;
@property(readonly, nonatomic) NSViewController *interactiveUIController; // @synthesize interactiveUIController=_interactiveUIController;
@property(readonly, nonatomic) XRModalViewController *windowContentController; // @synthesize windowContentController=_windowContentController;
@property(readonly, nonatomic) XRSummaryViewController *summaryViewController; // @synthesize summaryViewController=_summaryViewController;
@property(readonly) PFTSelectedEventDataElementList *extendedDetailModel; // @synthesize extendedDetailModel=_extendedDetailModel;
@property __weak DVTBorderedView *belowToolbarBorderedView; // @synthesize belowToolbarBorderedView=_belowToolbarBorderedView;
@property __weak NSLayoutConstraint *strategyToolbarHeightConstraint; // @synthesize strategyToolbarHeightConstraint=_strategyToolbarHeightConstraint;
@property(retain) NSView *normalContentView; // @synthesize normalContentView=_normalContentView;
@property __weak XRPlaceholderView *strategyToolbarHost; // @synthesize strategyToolbarHost=_strategyToolbarHost;
@property(retain, nonatomic) XRStrategiesToolbarViewController *strategiesToolbarViewController; // @synthesize strategiesToolbarViewController=_strategiesToolbarViewController;
@property(retain, nonatomic) id <XRToolbarManager> toolbarManager; // @synthesize toolbarManager=_toolbarManager;
@property(retain, nonatomic) NSSet *currentStrategyIdentifiers; // @synthesize currentStrategyIdentifiers=_currentStrategyIdentifiers;
@property(retain, nonatomic) XRRecordingOptionsViewController *recordingOptionsViewController; // @synthesize recordingOptionsViewController=_recordingOptionsViewController;
@property(copy, nonatomic) XRMainWindowUIState *state; // @synthesize state=_state;
@property(retain) XRContext *rootContext; // @synthesize rootContext=_rootContext;
@property __weak XRContextPathControl *contextPathControl; // @synthesize contextPathControl=_contextPathControl;
@property __weak NSView *navigationView; // @synthesize navigationView=_navigationView;
@property __weak PFTDetailTypeHostView *detailHost; // @synthesize detailHost=_detailHost;
@property __weak PFTLegacySearchTokenTextField *detailSearchField; // @synthesize detailSearchField=_detailSearchField;
@property(retain) PFTDataViewer *eventInspector; // @synthesize eventInspector=_eventInspector;
@property(retain) PFTDataViewer *instrumentInspector; // @synthesize instrumentInspector=_instrumentInspector;
@property(retain) PFTDataViewer *instrumentConfigurator; // @synthesize instrumentConfigurator=_instrumentConfigurator;
@property(retain) XRTimelineGraph *timelineGraph; // @synthesize timelineGraph=_timelineGraph;
@property(nonatomic) __weak NSTabView *inspectorDataViewer; // @synthesize inspectorDataViewer=_inspectorDataViewer;
@property(nonatomic) __weak NSView *inspectorChooserView; // @synthesize inspectorChooserView=_inspectorChooserView;
@property(nonatomic) __weak NSView *controlBarView; // @synthesize controlBarView=_controlBarView;
@property(readonly, nonatomic) NSMutableDictionary *strategyUIControllersByIdentifier; // @synthesize strategyUIControllersByIdentifier=_strategyUIControllersByIdentifier;
- (void).cxx_destruct;
- (void)handleLazyKVOUpdate:(id)arg1;
- (void)_refreshPass;
- (BOOL)windowShouldClose:(id)arg1;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)setupToolbar;
- (void)restoreStrategyUIControllerStates:(id)arg1;
- (id)archiveStrategyUIControllerStates;
- (void)unhideStrategyToolbarForWatermark;
- (void)hideStrategyToolbarForWatermark;
- (void)setStrategySummaryFilter:(id)arg1;
- (void)setStrategyToolbarVisible:(BOOL)arg1;
- (void)documentDidUpdateFilterForRunNumber:(long long)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)summaryViewContext;
- (void)callTreeMine:(id)arg1;
- (void)toggleExtendedDetail:(id)arg1;
- (void)performFindPanelAction:(id)arg1;
- (void)setSidebarState:(unsigned long long)arg1;
- (void)closeDetailView;
- (void)openDetailView;
- (id)searchCriteria;
- (void)toggleDetail:(id)arg1;
- (void)addCriteriaToSearchField:(id)arg1;
- (void)_openDataView;
- (id)iconForContext:(id)arg1;
- (id)contextContainerForUUID:(id)arg1;
- (id)viewForContext:(id)arg1;
- (id)siblingsForContext:(id)arg1;
- (id)splitterContext;
- (void)_respondToDisplayedContextChange;
- (void)displayContext:(id)arg1;
- (id)contextRepresentation;
- (id)uuid;
- (id)strategyDetailsContext;
- (void)inspectFlag:(id)arg1;
- (void)removeFlag:(id)arg1;
- (void)addFlagToRecording:(id)arg1;
- (void)nextFlag:(id)arg1;
- (void)prevFlag:(id)arg1;
- (id)_inspectionCursor;
- (void)_coreSpaceNotification:(id)arg1;
- (void)setSelection:(id)arg1 strategy:(struct NSString *)arg2;
- (id)_selectedStrategyUI;
- (void)inputHandlerForGraph:(id)arg1 requestsHeight:(double)arg2 forPlane:(id)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestsCollapsingGroupPlane:(id)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsExpandingGroupPlane:(id)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsEndLongPressDragAtTime:(unsigned long long)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsLongPressDragToTime:(unsigned long long)arg2;
- (BOOL)inputHandlerForGraph:(id)arg1 requestsLongPressDragBeginAtTime:(unsigned long long)arg2 onPlanes:(id)arg3;
- (void)inputHandlerForGraph:(id)arg1 unhandledClickAtTime:(unsigned long long)arg2 clickCount:(long long)arg3 onPlanes:(id)arg4;
- (void)inputHandlerRequestsToClearCurrentInspectionTimeForGraph:(id)arg1;
- (void)inputHandlerRequestsToClearInspectionInfoForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondsPerPoint:(unsigned long long)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsCurrentInspectionTime:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearSelectedTimeRangeForGraph:(id)arg1;
- (void)inputHandlerDidFinishSelectionForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsSelectedTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestYOffset:(double)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondOffset:(long long)arg2;
- (void)toggleLibrary:(id)arg1;
- (id)_libraryButton;
- (void)recordOptions:(id)arg1;
- (void)deleteRun:(id)arg1;
- (void)deleteInstrument:(id)arg1;
- (void)editInstrument:(id)arg1;
- (void)_editInstrumentInstance:(id)arg1;
- (id)_modalEditorViewControllerForDataElement:(id)arg1 instrument:(id)arg2;
- (void)showExtendedDetail:(id)arg1;
- (void)showDisplaySettings:(id)arg1;
- (void)showRecordSettings:(id)arg1;
- (void)callTreeCompare:(id)arg1;
- (void)fullScreenAction:(id)arg1;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)snapTrackViewToFit:(id)arg1;
- (void)recordTrace:(id)arg1;
@property(readonly) unsigned long long scaleNeededForSnapTrackViewToFit;
@property(readonly, nonatomic) __weak PFTTraceDocument *traceDocument;
- (void)windowWillClose:(id)arg1;
- (void)setDocument:(id)arg1;
- (BOOL)shouldCloseDocument;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (id)_touchBarController;
- (id)makeTouchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

__attribute__((visibility("hidden")))
@interface XRTrackPlaneEntry : NSObject
{
    float _order;
    DTTimelinePlane *_plane;
    unsigned long long _type;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) float order; // @synthesize order=_order;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) DTTimelinePlane *plane; // @synthesize plane=_plane;
- (void).cxx_destruct;
- (double)heightWithResizablePlaneHeight:(double)arg1;
- (id)initWithPlane:(id)arg1 type:(unsigned long long)arg2 order:(float)arg3;

@end

__attribute__((visibility("hidden")))
@interface XRTrackPlaneTopLevelEntry : XRTrackPlaneEntry
{
    NSMutableArray *_children;
}

@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (double)heightWithResizablePlaneHeight:(double)arg1;
- (double)height;
- (id)initWithGroupPlane:(id)arg1 order:(float)arg2;

@end

@interface XRTrack : XRStrategyDecorationRequest
{
    NSMutableArray *_planes;
    NSMapTable *_groupPlaneMap;
    double _fixedHeightTotal;
    NSMutableArray *_delayedUpdateOps;
    unsigned long long _heightInDeckUnits;
    NSString *_displayContext;
}

+ (double)deckHeightInPointsForIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *displayContext; // @synthesize displayContext=_displayContext;
@property(nonatomic) unsigned long long heightInDeckUnits; // @synthesize heightInDeckUnits=_heightInDeckUnits;
- (void).cxx_destruct;
- (void)requiresOperationToCompleteBeforeLayout:(id)arg1;
- (void)doneAddingPlanes;
- (void)_layoutPlanes;
- (double)_determineHeightOfSinglePlane:(id)arg1 type:(unsigned long long)arg2 resizablePlaneHeight:(double)arg3 extraPixelHeight:(double)arg4;
- (double)_requiredHeightWithResizablePlaneHeight:(double)arg1;
- (void)_sortPlanes;
- (double)_totalInterplanePadding;
- (unsigned long long)_planeCount;
- (unsigned long long)_eventPlaneCountIncludingNested:(BOOL)arg1;
- (unsigned long long)_valuePlaneCountIncludingNested:(BOOL)arg1;
- (void)_shrinkFixedPlanes;
- (void)_addIntervalEventPlane:(id)arg1 order:(float)arg2 toGroupPlane:(id)arg3;
- (void)_addIntervalEventPlane:(id)arg1 order:(float)arg2;
- (void)_addPointEventPlane:(id)arg1 order:(float)arg2 toGroupPlane:(id)arg3;
- (void)_addPointEventPlane:(id)arg1 order:(float)arg2;
- (void)_addStatePlane:(id)arg1 order:(float)arg2 toGroupPlane:(id)arg3;
- (void)_addStatePlane:(id)arg1 order:(float)arg2;
- (void)_addValuePlane:(id)arg1 order:(float)arg2 toGroupPlane:(id)arg3;
- (void)_addValuePlane:(id)arg1 order:(float)arg2;
- (id)addGroupPlaneOrder:(float)arg1;
- (void)addPlane:(id)arg1 type:(unsigned long long)arg2 order:(float)arg3 toGroupPlane:(id)arg4;
- (void)addPlane:(id)arg1 type:(unsigned long long)arg2 order:(float)arg3;
@property(readonly, nonatomic) BOOL planesWereAdded;
- (void)removeAllPlanes;
- (void)addValuePlane:(id)arg1 order:(float)arg2;
- (id)initWithRunNumber:(long long)arg1 resolution:(unsigned long long)arg2;
- (id)initWithPlaneManager:(id)arg1 groupPlane:(id)arg2 runNumber:(long long)arg3 resolution:(unsigned long long)arg4 strategyIdentifier:(id)arg5;

@end

@interface XRTrackOverlay : XRStrategyDecorationRequest
{
}

- (void)addConnectionPlane:(id)arg1;

@end

@interface XRInspector : NSObject <NSPopoverDelegate>
{
    id <XRInspectorSource> _source;
    id <XRInspectorDelegate> _delegate;
    NSPopover *_popover;
    NSView *_positioningView;
    unsigned long long _preferredEdge;
}

@property(nonatomic) unsigned long long preferredEdge; // @synthesize preferredEdge=_preferredEdge;
@property(retain, nonatomic) NSView *positioningView; // @synthesize positioningView=_positioningView;
@property(retain, nonatomic) NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) __weak id <XRInspectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <XRInspectorSource> source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (void)close;
- (void)reload;
- (id)initWithSource:(id)arg1 popover:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRInspectorManager : NSObject <XRInspectorDelegate>
{
    NSMutableSet *_inspectors;
}

+ (id)sharedInspectorManager;
@property(retain, nonatomic) NSMutableSet *inspectors; // @synthesize inspectors=_inspectors;
- (void).cxx_destruct;
- (id)_inspectorForSource:(id)arg1;
- (void)inspectorDidClose:(id)arg1;
- (id)inspectorsForWindow:(id)arg1;
- (void)closeInspectorsOnWindow:(id)arg1;
- (void)closeInspectorAttachedToSource:(id)arg1;
- (void)moveInspectorAttachedToSource:(id)arg1 toRect:(struct CGRect)arg2;
- (void)toggleInspectorAttachedToSource:(id)arg1 tipArea:(struct CGRect)arg2 view:(id)arg3;
- (void)reloadInspectorAttachedToSource:(id)arg1;
- (void)attachInspectorToSource:(id)arg1 tipArea:(struct CGRect)arg2 view:(id)arg3;
- (void)attachInspectorToSource:(id)arg1 tipArea:(struct CGRect)arg2 view:(id)arg3 preferredEdge:(unsigned long long)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRTopicBrowserViewController : NSViewController <DVTOutlineViewDelegate, NSOutlineViewDataSource, XRTopicViewer, XRTopicBrowserViewDelegate>
{
    long long _returnCode;
    BOOL _isSheet;
    BOOL _icHandlesKeyDown;
    NSArray *_topics;
    XRTopic *_singleDropTopic;
    NSObject<XRTopicInterfaceComponent> *_currentBrowserBoxComponent;
    NSObject<XRTopicInterfaceComponent> *_currentOptionsBoxComponent;
    NSWindow *_parentWindow;
    XRBoxView *_browserBox;
    XRBoxView *_optionsBox;
    XRTopicBrowserOutlineView *_topicsList;
    NSButton *_cancelButton;
    NSButton *_okButton;
    NSTextField *_messageField;
}

@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) __weak NSButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak XRTopicBrowserOutlineView *topicsList; // @synthesize topicsList=_topicsList;
@property(nonatomic) __weak XRBoxView *optionsBox; // @synthesize optionsBox=_optionsBox;
@property(nonatomic) __weak XRBoxView *browserBox; // @synthesize browserBox=_browserBox;
@property(retain, nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain, nonatomic) NSObject<XRTopicInterfaceComponent> *currentOptionsBoxComponent; // @synthesize currentOptionsBoxComponent=_currentOptionsBoxComponent;
@property(retain, nonatomic) NSObject<XRTopicInterfaceComponent> *currentBrowserBoxComponent; // @synthesize currentBrowserBoxComponent=_currentBrowserBoxComponent;
@property(retain, nonatomic) XRTopic *singleDropTopic; // @synthesize singleDropTopic=_singleDropTopic;
@property(retain, nonatomic) NSArray *topics; // @synthesize topics=_topics;
- (void).cxx_destruct;
- (void)_endWithCode:(int)arg1;
- (void)setSelectedTopic:(id)arg1;
- (id)selectedTopic;
- (void)topicBrowserView:(id)arg1 filenameDropped:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)_setSubTopicView:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)_displaySheetOnTargetedObject:(id)arg1 withTopics:(id)arg2;
- (long long)displayModalOnTargetedObject:(id)arg1 withTopics:(id)arg2;
- (void)_cancel:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)okChooser:(id)arg1;
- (void)cancelChooser:(id)arg1;
- (id)result;
- (void)_updateView;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

__attribute__((visibility("hidden")))
@interface XRAnalysisCoreQueryIntervalDecoratorHandler : NSObject <XRAnalysisCoreQueryHandler>
{
    struct _opaque_pthread_mutex_t _lock;
    struct DTTimelineDecorationContainer *_container;
    unsigned char _timeColumnID;
    unsigned char _durationColumnID;
    unsigned char _valueColumnID;
    unsigned short _valueEngineeringType;
    unsigned char _valueColumnImpType;
    XRAnalysisCoreUIPlanEngineeringTypeOverride *_engineeringTypeOverride;
    int _nextAvailableLabel;
    unsigned long long _highlightType;
    union XRBookmark _highlightBookmark;
    const vector_59b01178 *_highlightBookmarks;
}

- (void).cxx_destruct;
- (void)reduceFromLocalResults:(id)arg1;
- (void)runWorkgroup:(unsigned short)arg1 of:(unsigned int)arg2 withLocalResults:(id)arg3 context:(id)arg4 rowIterator:(struct XRAnalysisCoreReadCursor *)arg5;
- (void)dealloc;
- (id)initWithContainer:(struct DTTimelineDecorationContainer *)arg1 timeColumnID:(unsigned char)arg2 durationColumnID:(unsigned char)arg3 valueColumnID:(unsigned char)arg4 valueEngineeringType:(unsigned short)arg5 valueColumnImpType:(unsigned char)arg6 engineeringTypeOverride:(id)arg7 highlightBookmarks:(const vector_59b01178 *)arg8;
- (id)initWithContainer:(struct DTTimelineDecorationContainer *)arg1 timeColumnID:(unsigned char)arg2 durationColumnID:(unsigned char)arg3 valueColumnID:(unsigned char)arg4 valueEngineeringType:(unsigned short)arg5 valueColumnImpType:(unsigned char)arg6 engineeringTypeOverride:(id)arg7 highlightBookmark:(union XRBookmark)arg8;
- (id)initWithContainer:(struct DTTimelineDecorationContainer *)arg1 timeColumnID:(unsigned char)arg2 durationColumnID:(unsigned char)arg3 valueColumnID:(unsigned char)arg4 valueEngineeringType:(unsigned short)arg5 valueColumnImpType:(unsigned char)arg6 engineeringTypeOverride:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

__attribute__((visibility("hidden")))
@interface XRAnalysisCoreQueryIntervalDecorator : XRAnalysisCoreQueryBasedDecorator
{
    NSColor *_defaultHighlightColor;
    NSColor *_defaultTextHighlightColor;
    NSImage *_defaultHighlightDrawableIcon;
    double _planeHeight;
    double _textHeight;
    int _iconSize;
    BOOL _isHighlightable;
    BOOL _isEventType;
}

- (void).cxx_destruct;
- (void)decorateInspectionRanges:(id)arg1 fromCore:(id)arg2 qualityOfService:(unsigned int)arg3 priority:(int)arg4 group:(id)arg5;
- (void)fillContainer:(struct DTTimelineDecorationContainer *)arg1 fromCore:(id)arg2 qualityOfService:(unsigned int)arg3 priority:(int)arg4 group:(id)arg5;
- (id)representativeQueryFromCore:(id)arg1;
- (BOOL)heightChangedForPlane:(id)arg1;
- (BOOL)_setHeightDependantDefaultsForPlane:(id)arg1;
- (void)setDefaultsForPlane:(id)arg1;
- (id)initWithTrace:(id)arg1 runNumber:(long long)arg2 formatter:(id)arg3 treatment:(id)arg4 tableID:(unsigned int)arg5 timeColumnID:(unsigned char)arg6 durationColumnID:(unsigned char)arg7 valueColumnID:(unsigned char)arg8 valueLabelColumnID:(unsigned char)arg9 colorColumnID:(unsigned char)arg10 visualConnectionUUIDLabelColumnID:(unsigned char)arg11 selectionCriteria:(id)arg12 selectionColumnIDs:(id)arg13;

@end

@interface XRSplitView : NSSplitView
{
}

- (double)dividerThickness;
- (void)drawDividerInRect:(struct CGRect)arg1;

@end

@interface XRBoxView : NSView
{
    NSView *_contentView;
}

- (void).cxx_destruct;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

@interface XRTransparentView : NSView
{
}

- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;

@end

@interface XRInstrumentsTimelineAccessibilityElement : XRAccessibilityElement <NSAccessibilityOutline>
{
    XRInstrumentsStrategyUIController *_UIController;
    NSMutableArray *_rows;
    XRTimelineItemAccessibilityElement *_selectedInstrumentAE;
}

- (void).cxx_destruct;
- (long long)accessibilityColumnCount;
- (long long)accessibilityRowCount;
- (id)accessibilityChildren;
- (id)accessibilityHelp;
- (void)setAccessibilitySelectedRows:(id)arg1;
- (id)accessibilitySelectedRows;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityParent;
- (id)accessibilityRows;
- (id)accessibilityLabel;
- (void)rebuild;
- (id)initWithInstrumentsStrategyUIController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRSpacerToolbarItem : XRToolbarItem
{
}

- (struct CGSize)minSize;
- (struct CGSize)maxSize;
- (void)connectToContext:(id)arg1;

@end

@interface XRStrategyUIInspector : NSObject <XRLazyKVOResponder, XRInspectorSource>
{
    NSString *_documentUUID;
    XRLazyKVOAdapter *_kvoAdapter;
    XRStrategyUIController *_owner;
    XRStrategyInspectionNavigator *_navigator;
}

@property(retain, nonatomic) XRStrategyInspectionNavigator *navigator; // @synthesize navigator=_navigator;
@property(readonly, nonatomic) __weak XRStrategyUIController *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)_detachInspector;
- (BOOL)canMoveLeft;
- (BOOL)canMoveRight;
- (void)_displayRelatedEventDetail;
- (void)_moveToNextEvent;
- (void)_moveToPreviousEvent;
- (id)documentUUID;
- (void)inspectorDismissed:(id)arg1;
- (void)handleLazyKVOUpdate:(id)arg1;
- (id)dataElementsForInspector:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithStrategyUIController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRModalViewController : NSViewController <XRTabViewControllerAnimationControlDelegate>
{
    XRTabViewControllerWithDelegate *_subviewController;
    NSString *_currentMode;
    NSProgress *_displayedProgress;
    NSMutableDictionary *_itemsByMode;
    BOOL _animating;
}

+ (BOOL)_animateTransitions;
- (void).cxx_destruct;
- (void)_subviewBecameInteractive:(id)arg1;
- (void)_subviewBecameBusy:(id)arg1;
- (void)setViewController:(id)arg1 mode:(id)arg2;
- (void)setMode:(id)arg1 progress:(id)arg2;
- (void)_throttledSwitchToMode:(id)arg1;
- (BOOL)_hasController:(id)arg1;
- (void)tabViewControllerFinishedAnimating:(id)arg1;
- (void)tabViewControllerStartedAnimating:(id)arg1;
- (void)updateViewConstraints;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRTabViewControllerWithDelegate : NSTabViewController
{
    id <XRTabViewControllerAnimationControlDelegate> _animationDelegate;
}

@property(nonatomic) __weak id <XRTabViewControllerAnimationControlDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (void).cxx_destruct;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

@interface XRNonAnimatingModalViewController : XRModalViewController
{
}

+ (BOOL)_animateTransitions;

@end

@interface XRSymbolBackgroundView : NSView
{
}

@end

@interface XRSymbolLookupView : PFTNibView <NSComboBoxDataSource>
{
    NSTextField *_title;
    NSComboBox *_comboBox;
    NSProgressIndicator *_progressBar;
    NSTextField *_progressTitle;
    NSArray *_symbols;
    unsigned long long _lengthToCancel;
    unsigned long long _lastIndex;
    BOOL _isSorted;
    PFTProcess *_target;
}

- (void).cxx_destruct;
- (void)_loadUpdatedSymbolsPartTwo:(id)arg1;
- (void)_loadUpdatedSymbols:(id)arg1;
- (void)_updateCompleteUI;
- (void)_updateSymbols:(id)arg1;
- (id)comboBox:(id)arg1 completedString:(id)arg2;
- (unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
- (void)cancelDialog:(id)arg1;
- (void)cancel:(id)arg1;
- (void)symbolChosen:(id)arg1;
- (void)endWithCode:(long long)arg1;
- (id)comboBox;
- (id)titleField;
- (void)_textFieldChanged:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (id)initWithInstruments:(id)arg1 target:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRAnalysisCoreValueCellTextView : NSView
{
    NSTrackingArea *_trackingArea;
    NSAttributedString *_content;
    NSAttributedString *_adjustedContent;
    struct __CTLine *_renderableContent;
    struct CGSize _intrinsicSize;
    double _baselineFromBottom;
    struct _NSRange _linkifyRange;
    NSArray *_components;
    BOOL _observingFlagChanges;
    BOOL _exposeAllPossibleLinks;
    BOOL _selected;
    BOOL _emphasized;
    BOOL _filteredOut;
    NSAttributedString *_placeholderString;
    XRActionContext *_actionContext;
}

+ (id)defaultPlaceholderString;
+ (void)initialize;
@property(retain, nonatomic) XRActionContext *actionContext; // @synthesize actionContext=_actionContext;
@property(copy, nonatomic) NSAttributedString *placeholderString; // @synthesize placeholderString=_placeholderString;
@property(nonatomic) BOOL filteredOut; // @synthesize filteredOut=_filteredOut;
@property(nonatomic) BOOL emphasized; // @synthesize emphasized=_emphasized;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)_fireAction:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)accessibilityAttributedStringForRange:(struct _NSRange)arg1;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (id)accessibilityRole;
- (BOOL)acceptsFirstResponder;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)_disableLinkHighlightingIfNeeded;
- (void)mouseEntered:(id)arg1;
- (void)_windowFlagChange:(id)arg1;
- (void)_updateLinkifyRangeWithEvent:(id)arg1;
- (BOOL)_getComponent:(id *)arg1 atLocationInBounds:(struct CGPoint)arg2;
- (id)hitTest:(struct CGPoint)arg1;
- (void)updateTrackingAreas;
- (void)flagsChanged:(id)arg1;
- (double)baselineOffsetFromBottom;
- (struct CGSize)intrinsicContentSize;
- (void)setContent:(id)arg1 characterMap:(id)arg2;
- (id)content;
- (void)_refreshAdjustedContent;
- (void)_colorCorrectString:(id)arg1 range:(struct _NSRange)arg2;
- (void)_invalidateMetrics;
- (void)_recomputeMetrics;
- (void)drawRect:(struct CGRect)arg1;
- (void)_resetPlaceholderStringToDefault;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (BOOL)isFlipped;

@end

@interface XRAnalysisCoreValueCellTextComponent : NSObject
{
    XRAnalysisCoreValue *_subvalue;
    struct _NSRange _characterRange;
}

@property(copy, nonatomic) XRAnalysisCoreValue *subvalue; // @synthesize subvalue=_subvalue;
@property(nonatomic) struct _NSRange characterRange; // @synthesize characterRange=_characterRange;
- (void).cxx_destruct;

@end

@interface XRSymbolsPreferencesModule : XRPreferencesModule <NSOpenSavePanelDelegate, NSTableViewDelegate, NSTableViewDataSource, NSTextFieldDelegate>
{
    NSOpenPanel *_currentDSYMScriptOpenPanel;
    NSMutableArray *_advancedOptions;
    NSView *_currentDetailView;
    unsigned char _currentDetailType;
    NSImage *_statusLightGreen;
    NSImage *_statusLightRed;
    NSArrayController *_searchPathController;
    NSPopUpButton *_dsymScriptUsagePopUp;
    DVTBorderedView *_searchPathsBox;
    DVTScrollView *_searchPathsScrollView;
    DVTTableView *_searchPathsTableView;
    DVTGradientImageButton *_addSymbolPathButton;
    DVTGradientImageButton *_removeSymbolPathButton;
    DVTFilePathField *_downloadScriptTextField;
    NSButton *_advanceButton;
    NSNumberFormatter *_integerNumberFormatter;
    NSView *_advancedOptionsView;
    DVTBorderedView *_settingsBorderedView;
    DVTBorderedView *_advancedOptionsDetailView;
    NSTextField *_detailNameLabel;
    NSTextField *_detailNameTextField;
    NSTextField *_detailDescriptionTextField;
    NSTableView *_settingsTableView;
    NSView *_detailPlaceholderView;
    NSView *_boolDetailView;
    NSButton *_boolDetailButton;
    NSView *_integerDetailView;
    NSTextField *_integerTextField;
    NSView *_argumentDetailView;
    NSTextField *_argumentTextField;
}

@property __weak NSTextField *argumentTextField; // @synthesize argumentTextField=_argumentTextField;
@property(retain) NSView *argumentDetailView; // @synthesize argumentDetailView=_argumentDetailView;
@property __weak NSTextField *integerTextField; // @synthesize integerTextField=_integerTextField;
@property(retain) NSView *integerDetailView; // @synthesize integerDetailView=_integerDetailView;
@property __weak NSButton *boolDetailButton; // @synthesize boolDetailButton=_boolDetailButton;
@property(retain) NSView *boolDetailView; // @synthesize boolDetailView=_boolDetailView;
@property __weak NSView *detailPlaceholderView; // @synthesize detailPlaceholderView=_detailPlaceholderView;
@property __weak NSTableView *settingsTableView; // @synthesize settingsTableView=_settingsTableView;
@property __weak NSTextField *detailDescriptionTextField; // @synthesize detailDescriptionTextField=_detailDescriptionTextField;
@property __weak NSTextField *detailNameTextField; // @synthesize detailNameTextField=_detailNameTextField;
@property __weak NSTextField *detailNameLabel; // @synthesize detailNameLabel=_detailNameLabel;
@property __weak DVTBorderedView *advancedOptionsDetailView; // @synthesize advancedOptionsDetailView=_advancedOptionsDetailView;
@property __weak DVTBorderedView *settingsBorderedView; // @synthesize settingsBorderedView=_settingsBorderedView;
@property(retain) NSView *advancedOptionsView; // @synthesize advancedOptionsView=_advancedOptionsView;
@property(retain) NSNumberFormatter *integerNumberFormatter; // @synthesize integerNumberFormatter=_integerNumberFormatter;
@property __weak NSButton *advanceButton; // @synthesize advanceButton=_advanceButton;
@property __weak DVTFilePathField *downloadScriptTextField; // @synthesize downloadScriptTextField=_downloadScriptTextField;
@property __weak DVTGradientImageButton *removeSymbolPathButton; // @synthesize removeSymbolPathButton=_removeSymbolPathButton;
@property __weak DVTGradientImageButton *addSymbolPathButton; // @synthesize addSymbolPathButton=_addSymbolPathButton;
@property __weak DVTTableView *searchPathsTableView; // @synthesize searchPathsTableView=_searchPathsTableView;
@property __weak DVTScrollView *searchPathsScrollView; // @synthesize searchPathsScrollView=_searchPathsScrollView;
@property __weak DVTBorderedView *searchPathsBox; // @synthesize searchPathsBox=_searchPathsBox;
@property __weak NSPopUpButton *dsymScriptUsagePopUp; // @synthesize dsymScriptUsagePopUp=_dsymScriptUsagePopUp;
@property __weak NSArrayController *searchPathController; // @synthesize searchPathController=_searchPathController;
- (void).cxx_destruct;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)detailSupportedClicked:(id)arg1;
- (void)doneClicked:(id)arg1;
- (void)_showSymbolSheetEnded:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)advancedClicked:(id)arg1;
- (void)_populateAdvancedOptions;
- (void)saveChanges;
- (void)dsymScriptUsageChanged:(id)arg1;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (void)removeSearchPath:(id)arg1;
- (void)addSearchPath:(id)arg1;
- (void)_updateDSYMScriptTextField;
- (BOOL)isResizable;
- (id)imageForPreferenceNamed:(id)arg1;
- (void)initializeFromDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRGeneralActionPlugIn : XRActionHandler
{
}

- (void)addFilterToken:(id)arg1 withContext:(id)arg2;
- (void)removeProcessFromFilter:(id)arg1 withContext:(id)arg2;
- (void)addProcessToFilter:(id)arg1 withContext:(id)arg2;
- (void)showSchedulingLoad:(id)arg1 withContext:(id)arg2;
- (void)lookupSystemCallDocs:(id)arg1 withContext:(id)arg2;
- (void)revealCPUInCPUStrategy:(id)arg1 withContext:(id)arg2;
- (void)revealThreadInThreadStrategy:(id)arg1 withContext:(id)arg2;
- (void)_pardonOurDust;
- (void)lookupAPIWithTargets:(id)arg1 withContext:(id)arg2;
- (id)displayNameForAction:(id)arg1 targets:(id)arg2 context:(id)arg3;
- (BOOL)validateAction:(id)arg1 targets:(id)arg2 context:(id)arg3;
- (void)_progressSheetEnded:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)symbolInspector:(id)arg1 withContext:(id)arg2;

@end

@interface XRTargetChooserToolbarItem : XRToolbarItem <NSPathControlDelegate, NSMenuDelegate, XRDeviceObserver>
{
    NSObject<XRProcessTargetedObject> *_currentTargetedObject;
    XRTargetChooserPathControl *_pathControl;
}

@property(retain) XRTargetChooserPathControl *pathControl; // @synthesize pathControl=_pathControl;
- (void).cxx_destruct;
- (long long)visibilityPriority;
- (struct CGSize)minSize;
- (struct CGSize)maxSize;
- (void)_reconfigurePathControl;
- (void)disconnectFromContext;
- (void)connectToContext:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleDeviceNotification:(id)arg1;
- (id)initWithItemIdentifier:(id)arg1 documentIdentifier:(id)arg2;
- (id)device;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRTargetChooserToolbarBorderButton : NSButton
{
}

+ (BOOL)accessibilityIsSingleCelled;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityRoleAttribute;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface XRAccessibilityElement : NSAccessibilityElement
{
}

- (void)rebuild;
- (id)accessibilityHitTest:(struct CGPoint)arg1;

@end

@interface XRControlBand : NSView
{
}

- (void)drawRect:(struct CGRect)arg1;

@end

@interface XRStrategyDecorationRequest : XRStrategyContextObject
{
    unsigned long long _resolution;
    NSArray *_requestedBrushNames;
    DTTimelineGraphPlaneManager *_manager;
    DTTimelineGroupPlane *_groupPlane;
}

@property(readonly, nonatomic) DTTimelineGroupPlane *groupPlane; // @synthesize groupPlane=_groupPlane;
@property(readonly, nonatomic) __weak DTTimelineGraphPlaneManager *manager; // @synthesize manager=_manager;
@property(copy, nonatomic) NSArray *requestedBrushNames; // @synthesize requestedBrushNames=_requestedBrushNames;
@property(nonatomic) unsigned long long resolution; // @synthesize resolution=_resolution;
- (void).cxx_destruct;
- (void)addPlane:(id)arg1 groupPlane:(id)arg2;
- (id)initWithPlaneManager:(id)arg1 groupPlane:(id)arg2 runNumber:(long long)arg3 resolution:(unsigned long long)arg4 strategyIdentifier:(id)arg5;
- (id)init;

@end

@interface XRAnalysisCoreDetailViewContent : NSObject
{
    BOOL _showDebuggingUI;
    unsigned int _tableID;
    PFTTraceDocument *_document;
    XRTrace *_trace;
    long long _runNumber;
    NSString *_instrumentUUID;
    XRAnalysisCoreUIPlan *_plan;
    NSString *_accessibilityTitle;
    NSString *_accessibilityLabel;
}

@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *accessibilityTitle; // @synthesize accessibilityTitle=_accessibilityTitle;
@property(nonatomic) BOOL showDebuggingUI; // @synthesize showDebuggingUI=_showDebuggingUI;
@property(retain, nonatomic) XRAnalysisCoreUIPlan *plan; // @synthesize plan=_plan;
@property(retain, nonatomic) NSString *instrumentUUID; // @synthesize instrumentUUID=_instrumentUUID;
@property(nonatomic) long long runNumber; // @synthesize runNumber=_runNumber;
@property(nonatomic) __weak XRTrace *trace; // @synthesize trace=_trace;
@property(nonatomic) __weak PFTTraceDocument *document; // @synthesize document=_document;
@property(nonatomic) unsigned int tableID; // @synthesize tableID=_tableID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

@interface XRAnalysisCoreTableViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, NSMenuDelegate, DTRenderableContentProviderDelegate, XRFilteredDataSource>
{
    BOOL _responseStale;
    BOOL _responseMustBeStaged;
    BOOL _canSubmit;
    XRActionContext *_actionContext;
    struct DTRenderableContentResponse *__response;
    XRAnalysisCoreTableViewControllerProvider *_provider;
    struct DTRenderableContentResponse *_stagedResponse;
    XRAnalysisCoreTableViewContent *_viewsAbstractContent;
    NSIndexSet *_selectedRows;
    NSArray *_sortDescriptors;
    XRAnalysisCoreFullTextSearchSpec *_fullTextSearchPrototype;
    unsigned long long _documentsInspectionTime;
    NSString *_focusedName;
    id <XRAnalysisCoreTableViewControllerDelegate> _delegate;
    NSArray *_extendedDetailForCurrentSelection;
    NSTableView *_tableView;
    XRDetailViewSplashViewController *_splashController;
    XRAnalysisCoreTableViewColumnList *_columns;
    struct XRTimeRange _focusedTimeRange;
}

@property(retain, nonatomic) XRAnalysisCoreTableViewColumnList *columns; // @synthesize columns=_columns;
@property(retain, nonatomic) XRDetailViewSplashViewController *splashController; // @synthesize splashController=_splashController;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *extendedDetailForCurrentSelection; // @synthesize extendedDetailForCurrentSelection=_extendedDetailForCurrentSelection;
@property(nonatomic) __weak id <XRAnalysisCoreTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *focusedName; // @synthesize focusedName=_focusedName;
@property(nonatomic) struct XRTimeRange focusedTimeRange; // @synthesize focusedTimeRange=_focusedTimeRange;
- (void).cxx_destruct;
- (void)copy:(id)arg1;
- (void)_setDocumentTimeFilter:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (id)_indexesToProcessForContextMenu;
- (void)_prepareFocusChange:(id)arg1;
- (id)selectedSearchContext;
- (id)searchContexts;
- (void)filterDetailWithTokens:(id)arg1 context:(id)arg2 matchesAny:(BOOL)arg3;
- (void)_requeryAnalysisCoreWithShortDescription:(id)arg1;
- (void)restoreUIState:(id)arg1;
- (void)saveUIState:(id)arg1;
- (id)_computeExtendedDetailForCurrentSelection;
- (id)_objectForStackDataElement:(id)arg1;
- (void)setDocumentInspectionTime:(unsigned long long)arg1;
- (void)providerHasNewResponse:(id)arg1;
- (void)_retrieveResponse;
- (void)_handleNewResponse:(struct DTRenderableContentResponse *)arg1;
- (void)_moveSelectionToInspectionTimeWithOptions:(unsigned long long)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)didResymbolicate:(id)arg1;
- (void)refresh;
- (void)viewWillLayout;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (void)setRepresentedObject:(id)arg1;
- (void)_changeRepresentedObjectFrom:(id)arg1 to:(id)arg2;
- (void)_adaptTableViewToContent:(id)arg1;
- (id)_requestFromAbstract:(id)arg1;
- (id)_createSpecForTableID:(unsigned int)arg1 core:(id)arg2;
- (void)_submitRequest:(id)arg1 shortDescription:(id)arg2 longDescription:(id)arg3;
- (struct DTRenderableContentResponse *)_lastResponse;
- (struct DTRenderableContentResponse *)_currentResponse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRAnalysisCoreTableViewContent : XRAnalysisCoreDetailViewContent
{
    XRAnalysisCoreUIListDetailSpec *_spec;
    XRAnalysisCoreTableQuery *_contentFilter;
    XRAnalysisCoreTableQuery *_documentBaseFilter;
    XRAnalysisCoreTableViewPersonality *_personality;
}

@property(retain, nonatomic) XRAnalysisCoreTableViewPersonality *personality; // @synthesize personality=_personality;
@property(retain, nonatomic) XRAnalysisCoreTableQuery *documentBaseFilter; // @synthesize documentBaseFilter=_documentBaseFilter;
@property(retain, nonatomic) XRAnalysisCoreTableQuery *contentFilter; // @synthesize contentFilter=_contentFilter;
@property(retain, nonatomic) XRAnalysisCoreUIListDetailSpec *spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end

@interface XRAnalysisCoreTableViewPersonality : NSObject
{
}

- (BOOL)shouldAddFocusActionToColumn:(id)arg1 abstractContent:(id)arg2;
- (BOOL)rowSelectionDoesNotAffectTimeSelection;
- (BOOL)contentChangesWithTimeInspection;
- (BOOL)adjustRowHeightToFitNarratives;
- (void)personalizeView:(id)arg1 forColumn:(id)arg2;
- (void)personalizeColumnItem:(id)arg1;
- (void)personalizeTableView:(id)arg1;
- (void)personalizeContentFilter:(id)arg1 timeInspection:(unsigned long long)arg2;
- (void)personalizeValueFormatter:(id)arg1;

@end

@interface XRAnalysisCoreTableViewControllerRequest : NSObject
{
    unsigned int _tableID;
    XRAnalysisCoreTableViewContent *_abstractContent;
    XRAnalysisCore *_core;
    XREngineeringTypeFormatter *_formatter;
    XRAnalysisCoreTableQuery *_contentFilter;
    XRAnalysisCoreTableQuery *_documentFilter;
    NSArray *_sortDescriptors;
    XRAnalysisCoreTableViewControllerResponse *_lastResponse;
    NSArray *_selectedSignatures;
}

@property(retain, nonatomic) NSArray *selectedSignatures; // @synthesize selectedSignatures=_selectedSignatures;
@property(retain, nonatomic) XRAnalysisCoreTableViewControllerResponse *lastResponse; // @synthesize lastResponse=_lastResponse;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(nonatomic) unsigned int tableID; // @synthesize tableID=_tableID;
@property(retain, nonatomic) XRAnalysisCoreTableQuery *documentFilter; // @synthesize documentFilter=_documentFilter;
@property(retain, nonatomic) XRAnalysisCoreTableQuery *contentFilter; // @synthesize contentFilter=_contentFilter;
@property(retain, nonatomic) XREngineeringTypeFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic) __weak XRAnalysisCore *core; // @synthesize core=_core;
@property(retain, nonatomic) XRAnalysisCoreTableViewContent *abstractContent; // @synthesize abstractContent=_abstractContent;
- (void).cxx_destruct;
- (id)init;

@end

@interface XRAnalysisCoreTableViewControllerResponse : NSObject
{
    BOOL _updatedDocumentFilter;
    unsigned int _tableID;
    XRAnalysisCoreTableViewContent *_abstractContent;
    XRAnalysisCore *_core;
    XREngineeringTypeFormatter *_formatter;
    XRAnalysisCoreTableQuery *_contentFilter;
    XRAnalysisCoreTableQuery *_documentFilter;
    NSArray *_sortDescriptors;
    XRAnalysisCorePivotArray *_rows;
    XRAnalysisCoreRowArray *_rowsPassingDocumentFilter;
    XRIntKeyedDictionary *_bookmarksPassingFilter;
    unsigned long long _kind;
    NSArray *_selectedSignatures;
}

@property(retain, nonatomic) NSArray *selectedSignatures; // @synthesize selectedSignatures=_selectedSignatures;
@property(nonatomic) unsigned long long kind; // @synthesize kind=_kind;
@property(retain, nonatomic) XRIntKeyedDictionary *bookmarksPassingFilter; // @synthesize bookmarksPassingFilter=_bookmarksPassingFilter;
@property(retain, nonatomic) XRAnalysisCoreRowArray *rowsPassingDocumentFilter; // @synthesize rowsPassingDocumentFilter=_rowsPassingDocumentFilter;
@property(nonatomic) BOOL updatedDocumentFilter; // @synthesize updatedDocumentFilter=_updatedDocumentFilter;
@property(retain, nonatomic) XRAnalysisCorePivotArray *rows; // @synthesize rows=_rows;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(nonatomic) unsigned int tableID; // @synthesize tableID=_tableID;
@property(retain, nonatomic) XRAnalysisCoreTableQuery *documentFilter; // @synthesize documentFilter=_documentFilter;
@property(retain, nonatomic) XRAnalysisCoreTableQuery *contentFilter; // @synthesize contentFilter=_contentFilter;
@property(retain, nonatomic) XREngineeringTypeFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic) __weak XRAnalysisCore *core; // @synthesize core=_core;
@property(retain, nonatomic) XRAnalysisCoreTableViewContent *abstractContent; // @synthesize abstractContent=_abstractContent;
- (void).cxx_destruct;
- (id)init;

@end

@interface XRAnalysisCoreTableViewControllerProvider : DTRenderableContentProvider
{
}

+ (BOOL)providesProgress;
- (id)fulfillRequest:(id)arg1 responseContainer:(id)arg2;

@end

@interface XRToolbarItem : NSToolbarItem
{
    BOOL _connectedToContext;
    NSString *_traceDocumentIdentifier;
}

@property BOOL connectedToContext; // @synthesize connectedToContext=_connectedToContext;
@property(copy) NSString *traceDocumentIdentifier; // @synthesize traceDocumentIdentifier=_traceDocumentIdentifier;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)itemContext;
- (void)disconnectFromContext;
- (void)connectToContext:(id)arg1;
- (void)_performContextDisconnection;
- (void)_performContextConnection;
- (id)toolTip;
- (id)paletteLabel;
- (void)dealloc;
- (id)initWithItemIdentifier:(id)arg1 documentIdentifier:(id)arg2;

@end

@interface XRInstrumentListItemViewController : XRTouchBarItemViewController <XRSupportsPFTWindowController, XRLazyKVOResponder>
{
    id <XRInstrumentListItemViewControllerDelegate> _delegate;
    NSScrollView *_scrollView;
    NSStackView *_stackView;
    XRLazyKVOAdapter *_observationAdapter;
}

@property(readonly, nonatomic) XRLazyKVOAdapter *observationAdapter; // @synthesize observationAdapter=_observationAdapter;
@property(retain, nonatomic) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <XRInstrumentListItemViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_selectInstrument:(id)arg1;
- (void)_updateInstrumentList;
- (id)_buildView;
- (void)handleLazyKVOUpdate:(id)arg1;
- (void)loadView;
- (id)initWithWindowController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PFTWindowController *pftWindowController; // @dynamic pftWindowController;
@property(readonly) Class superclass;

@end

@interface XRTargetChooserPathComponentCell : NSPathComponentCell
{
    BOOL _isFirstItem;
    BOOL _isLastItem;
    BOOL _isSelectable;
    int _gradientStyle;
}

+ (id)_textDrawingAttributes;
@property int gradientStyle; // @synthesize gradientStyle=_gradientStyle;
@property BOOL isSelectable; // @synthesize isSelectable=_isSelectable;
@property BOOL isLastItem; // @synthesize isLastItem=_isLastItem;
@property BOOL isFirstItem; // @synthesize isFirstItem=_isFirstItem;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_attributedStringValue:(BOOL)arg1;
- (id)shadow;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (double)_textOffsetForIcon:(id)arg1 inFrame:(struct CGRect)arg2 doDraw:(BOOL)arg3 isActive:(BOOL)arg4;
- (double)_rightDividerWidth;
- (double)_leftDividerWidth;
- (void)_drawDividerForFrame:(struct CGRect)arg1 inControlView:(id)arg2;
- (BOOL)_isActiveWindow:(id)arg1;
- (void)_useChevronForLeftEdge:(char *)arg1 rightEdge:(char *)arg2;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (double)iconSize;

@end

@interface XRImagePickerGrid : NSMatrix
{
    NSMutableArray *_trackingAreas;
}

- (void).cxx_destruct;
- (void)updateTrackingAreas;
- (void)loadImages:(id)arg1;
- (void)_layoutCells:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

@interface XRImagePickerCell : NSButtonCell
{
    BOOL _mouseInside;
    long long _mouseCellTag;
}

- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)cursorUpdate:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;

@end

@interface XRImagePickerView : NSImageView
{
    BOOL _mouseInside;
    NSTrackingArea *_trackingArea;
    id <XRImagePickerDelegate> _delegate;
    NSMenu *_menu;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_displayMenu:(id)arg1;
- (void)_imageSelected:(id)arg1;
- (void)updateTrackingAreas;
- (void)cursorUpdate:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

@interface XRTrackingAreaControl : NSTrackingArea
{
    BOOL _isMouseDown;
}

- (void)cursorUpdate:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)isMouseDown;
- (id)view;
- (BOOL)hitTest:(id)arg1;

@end

@interface XRCPUStrategyUIController : XRDefaultHostingStrategyUIController <XRLazyKVOResponder>
{
    NSPopUpButton *_cores;
    NSPopUpButton *_displayStyle;
    XRIntKeyedDictionary *_tracksByCoreNumber;
    XRCPUStrategyController *__observedController;
    XRLazyKVOAdapter *_kvoAdapter;
    XRAnalysisCoreTrackConfigurator *_trackConfigurator;
    XRCPUTimelineAccessibilityElement *_timelineAccessibilityElement;
    NSMapTable *_tracksByCore;
}

+ (id)_requiredStrategyControllerIdentifier;
@property(readonly, nonatomic) NSMapTable *tracksByCore; // @synthesize tracksByCore=_tracksByCore;
- (void).cxx_destruct;
- (void)_finalShutdownHandler;
- (void)_resolutionDidChange;
- (BOOL)_resolution:(unsigned long long)arg1 differsFrom:(unsigned long long)arg2;
- (BOOL)_supportsSelection;
- (void)_setModelSelection:(id)arg1;
- (void)_setTimelineGraph:(id)arg1;
- (void)setModel:(id)arg1;
- (void)_resetPlanesInTimeline;
- (void)handleLazyKVOUpdate:(id)arg1;
- (id)legend;
- (id)_categoryColors;
- (id)_userKernelColors;
- (void)_handleConsolidatedModelRefresh;
- (void)_styleSelected:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)updateDisplayOptions;
- (void)_selectCore:(id)arg1;
- (void)updateCoreList;
- (void)updateSummaryFilters;
- (id)styleViews;
- (id)filterViews;
- (id)displayName;
@property(retain, nonatomic) XRCPUStrategyController *observedController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRAnalysisCoreRollUpItem : NSObject
{
    unsigned long long _bookmark;
    struct NSMutableArray *_sortedSubItems;
    NSMutableIndexSet *_insertedIndexes;
    XRAnalysisCoreRollUpItem *_parent;
    unsigned char _level;
    NSMutableDictionary *_subItemsByValue;
}

@property(readonly, nonatomic) NSMutableDictionary *subItemsByValue; // @synthesize subItemsByValue=_subItemsByValue;
@property(readonly, nonatomic) XRAnalysisCoreRollUpItem *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) unsigned long long bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, nonatomic) unsigned char level; // @synthesize level=_level;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *subitems;
- (void)_updateChangesAndReset:(id)arg1;
- (void)addSubItem:(id)arg1 value:(id)arg2;
- (id)initWithBookmark:(unsigned long long)arg1 level:(unsigned char)arg2;

@end

@interface XRAnalysisCoreRollUpController : NSObject
{
    NSArray *_projectorHierarchy;
    NSMutableArray *_bookmarksByLevel;
    NSMutableDictionary *_topLevelItemsByValue;
    XRAnalysisCoreRollUpItem *_dimensionlessTopItem;
    struct NSMutableArray *_sortedTopLevelItems;
    struct NSMutableSet *_itemsPassingFilter;
    BOOL _forceFullRebuildOnRefresh;
    BOOL _hierarchical;
    unsigned char _dimensions;
    NSArray *_sortDescriptors;
    XRTokenizedTextFilterSpecification *_itemValueFilterSpec;
    XREngineeringTypeFormatter *_formatter;
}

@property(retain, nonatomic) XREngineeringTypeFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) XRTokenizedTextFilterSpecification *itemValueFilterSpec; // @synthesize itemValueFilterSpec=_itemValueFilterSpec;
@property(readonly, nonatomic, getter=isHierarchical) BOOL hierarchical; // @synthesize hierarchical=_hierarchical;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
- (void).cxx_destruct;
- (void)enumerateItemsInSet:(id)arg1 core:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)removeItem:(id)arg1 set:(id)arg2;
- (void)addItem:(id)arg1 set:(id)arg2;
- (id)topLevelItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)topLevelItemCount;
- (id)mostSummarizedProjector;
- (id)mostDetailedProjector;
- (id)projectorAtLevel:(unsigned char)arg1;
- (id)projectorForItem:(id)arg1;
- (id)itemAtLevel:(unsigned char)arg1 bookmark:(unsigned long long)arg2;
- (void)refresh:(id)arg1;
- (void)_filterSortedItems:(id)arg1;
- (void)_sortItemsByValue:(id)arg1;
- (void)_scanForNewItems:(id)arg1;
- (id)initWithProjectorHierarchy:(id)arg1;
- (id)initWithProjector:(id)arg1;
- (id)initWithProjectorArray:(id)arg1 formsHierarchy:(BOOL)arg2;

@end

@interface XRAnalysisCoreRollUpChangeSequence : NSObject
{
    NSMutableArray *_sequence;
    long long _moveCount;
    BOOL _reloadAll;
}

- (void).cxx_destruct;
- (void)enumerateChanges:(CDUnknownBlockType)arg1;
- (void)moveItem:(id)arg1 atIndex:(long long)arg2 inParent:(id)arg3 toIndex:(long long)arg4 inParent:(id)arg5;
- (void)insertedItem:(id)arg1 atIndex:(unsigned long long)arg2 parent:(id)arg3;
- (void)recreatingAllItems;
@property(readonly, nonatomic, getter=isIgnoringMoves) BOOL ignoringMoves;
- (id)init;

@end

@interface XRAnalysisCoreRollUpChange : NSObject
{
    XRAnalysisCoreRollUpItem *_item;
    unsigned long long _kind;
    long long _index;
    long long _otherIndex;
    XRAnalysisCoreRollUpItem *_parent;
    XRAnalysisCoreRollUpItem *_otherParent;
}

+ (id)movedItemChange:(id)arg1 atIndex:(long long)arg2 parent:(id)arg3 toIndex:(long long)arg4 parent:(id)arg5;
+ (id)insertedItemChange:(id)arg1 atIndex:(long long)arg2 parent:(id)arg3;
+ (id)fullReloadChange;
@property(readonly, nonatomic) XRAnalysisCoreRollUpItem *otherParent; // @synthesize otherParent=_otherParent;
@property(readonly, nonatomic) XRAnalysisCoreRollUpItem *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) long long otherIndex; // @synthesize otherIndex=_otherIndex;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) unsigned long long kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) XRAnalysisCoreRollUpItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)init;

@end

@interface XRAnalysisCoreRollUpItemSet : NSObject
{
    NSMutableDictionary *_rootAttrs;
}

- (void).cxx_destruct;
- (void)_enumerateContentsWithCore:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_removeItem:(id)arg1 projectors:(id)arg2;
- (void)_addItem:(id)arg1 projectors:(id)arg2;
- (id)plistRepresentation;
- (id)init;
- (id)initWithPlistRepresentation:(id)arg1;

@end

@interface XRScopedTextControl : PFTNibView <NSSplitViewDelegate>
{
    XRFlagsNavigatorControl *_historyButtons;
    NSSegmentedControl *_picker;
    NSSegmentedControl *_segments;
    NSSegmentedControl *_backdrop;
    XRTextView *_textView;
    NSImageView *_backgroundImage;
    NSView *_progressPanel;
    NSProgressIndicator *_spinner;
    NSTextField *_progressMessage;
    NSView *_recordingBar;
    NSButton *_playButton;
    NSButton *_recordButton;
    NSButton *_stopButton;
    int _waterMarkVisibility;
    BOOL _dual_view_mode;
    NSSplitView *_dualViewSplitter;
    XRTextView *_disasmView;
    NSView *_disasmProgressPanel;
    NSProgressIndicator *_disasmSpinner;
    NSTextField *_disasmProgressMessage;
    DVTSourceTextScrollView *_srcScrollView;
    DVTSourceTextScrollView *_disScrollView;
    NSTextField *_srcSelectionInfo;
    NSTextField *_disSelectionInfo;
    BOOL _showSelectionInfo;
    NSBox *_srcSelectionInfoBorder;
    NSBox *_disSelectionInfoBorder;
    BOOL _sourceIsLoaded;
    BOOL _disasmIsLoaded;
}

+ (id)_unselectedBackground;
+ (id)_selectedBackground;
+ (void)initializeColorsAndThemes;
+ (void)registerXcodeDefaults;
- (void).cxx_destruct;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (BOOL)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (void)recordButtonClicked:(id)arg1;
- (void)stopButtonClicked:(id)arg1;
- (void)playButtonClicked:(id)arg1;
- (void)validateRecordControls;
- (void)setScopeBarHidden:(BOOL)arg1;
- (id)customWatermark;
- (int)waterMarkVisibility;
- (void)setWaterMarkVisibility:(int)arg1;
- (void)viewDidMoveToWindow;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setRecordBarHidden:(BOOL)arg1;
- (BOOL)selectionStatsVisible;
- (void)showSelectionInfo:(BOOL)arg1;
- (void)updateSelectionToolTipsForSourceView:(id)arg1 andDisasmView:(id)arg2;
- (void)updateSelectionInfoForSourceView:(id)arg1 andDisasmView:(id)arg2;
- (id)disasmView;
- (id)textView;
- (id)detailViewLabel;
- (BOOL)dualView;
- (void)enableDualView:(BOOL)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRConsoleControlIntervalMonitor : NSObject
{
    unsigned char _timeColumnID;
    unsigned char _textColumnID;
    unsigned int _numRowsProcessed;
    XRAnalysisCoreRowArray *_rowArray;
}

@property(nonatomic) unsigned char textColumnID; // @synthesize textColumnID=_textColumnID;
@property(nonatomic) unsigned char timeColumnID; // @synthesize timeColumnID=_timeColumnID;
@property(nonatomic) unsigned int numRowsProcessed; // @synthesize numRowsProcessed=_numRowsProcessed;
@property(retain, nonatomic) XRAnalysisCoreRowArray *rowArray; // @synthesize rowArray=_rowArray;
- (void).cxx_destruct;

@end

@interface XRConsoleControl : XRScopedTextControl <XRLazyKVOResponder, DVTSourceTextViewDelegate, XRFilteredDataSource>
{
    PFTTraceDocument *_traceDocument;
    NSArrayController *_logController;
    BOOL _logObserved;
    unsigned long long _logCount;
    NSPredicate *_textFilterPredicate;
    long long _lastFilteredEntryDisplayed;
    int _previousType;
    NSMutableArray *_logEventPositionLineRanges;
    NSMutableArray *_logEventPositionEvents;
    BOOL _selectingEvent;
    NSRulerMarker *_timeSelectedMarker;
    struct _NSRange _outputRange;
    struct _NSRange _promptRange;
    XRLazyKVOAdapter *_kvoAdapter;
    NSArray *_consoleTableMonitors;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_eventHorizonFromCore:(id)arg1 withTimeRange:(struct XRTimeRange)arg2 startTime:(unsigned long long)arg3 trace:(id)arg4 runNumber:(long long)arg5 logStorage:(id)arg6;
- (void)setSelectedEvent:(id)arg1;
- (void)_moveMarkerToLine:(unsigned long long)arg1;
- (id)samplesInRange:(struct XRTimeRange)arg1;
- (void)inspectionHeadUpdated:(id)arg1;
- (void)filterDetailWithTokens:(id)arg1 context:(id)arg2 matchesAny:(BOOL)arg3;
- (void)_runDidEnd:(id)arg1;
- (void)_logUpdated:(id)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (struct _NSRange)textView:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateLogWithEventRange:(struct _NSRange)arg1 clearBeforeUpdate:(BOOL)arg2;
- (id)promptString;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)observeRunNumber:(long long)arg1;
- (void)_setUpConsoleTableMonitorsForCore:(id)arg1;
- (void)handleLazyKVOUpdate:(id)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)applyCurrentFilter;
- (void)_clearTextView;
- (void)_setWatermark;
- (id)customWatermark;
- (id)detailViewLabel;
- (id)classForNibName;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRPluginMigrator : NSObject
{
    BOOL _launch32;
}

- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (id)initWithRelaunch32Bit:(BOOL)arg1;

@end

@interface XRTextStorage : DVTTextStorage
{
    NSMutableDictionary *_links;
}

- (void).cxx_destruct;
- (void)fixSyntaxColoringInRange:(struct _NSRange)arg1;
- (void)removeAllLinks;
- (void)removeLinkForRange:(struct _NSRange)arg1;
- (void)addLink:(id)arg1 forRange:(struct _NSRange)arg2;

@end

@interface XRSourceControl : XRScopedTextControl <XRTextViewDragDestination, NSTextViewDelegate, XRContextContainer, NSOpenSavePanelDelegate, DVTSourceTextViewDelegate>
{
    XRInstrument *_instrumentNotRetained;
    BOOL _observingInstrument;
    id <XRSymbolSourceProxy> _selectedSymbolProxy;
    NSMutableArray *_runningQueries;
    NSSegmentedControl *_controlMenu;
    int _displayType;
    int _procState;
    int _dispState;
    NSError *_failure;
    XRCodeFragment *_srcFrag;
    XRCodeFragment *_disasmFrag;
    XRSymbolContext *_symbolContext;
    NSMutableArray *_currCoachCommentsArray;
    NSMutableDictionary *_textlineCommentsTable;
    NSMutableArray *_textlineInspectorKeys;
    NSMutableArray *_textlineInspectorValues;
    NSMutableDictionary *_disasmlineCommentsTable;
    NSMutableArray *_disasmlineInspectorKeys;
    NSMutableArray *_disasmlineInspectorValues;
    id <CommonSymbol> _focusedSymbol;
    BOOL _showLineMarker;
    unsigned long long _markerLineNumber;
    unsigned long long _disasmMarkerLineNumber;
    int _selfSettingSelections;
    id <XRSourceCommentProvider> _annotationProvider;
    id <XRSourceCommentScopeProvider> _annotationScopeProvider;
}

+ (void)registerXcodeDefaults;
@property(nonatomic) __weak id <XRSourceCommentScopeProvider> annotationScopeProvider; // @synthesize annotationScopeProvider=_annotationScopeProvider;
@property(nonatomic) __weak id <XRSourceCommentProvider> annotationProvider; // @synthesize annotationProvider=_annotationProvider;
- (void).cxx_destruct;
- (id)annotationContextForTextView:(id)arg1;
- (void)displayDisassemblyAnnotation:(id)arg1;
- (void)displaySourceAnnotation:(id)arg1;
- (void)displayAnnotationKey:(id)arg1;
- (id)dataElementsForExtendedDetail;
- (id)uuid;
- (id)iconForContext:(id)arg1;
- (id)viewForContext:(id)arg1;
- (id)siblingsForContext:(id)arg1;
- (void)displayContext:(id)arg1;
- (id)contextRepresentation;
- (void)startAnnotationQuery;
- (void)enableCounterpart:(BOOL)arg1;
- (void)consumeAnnotations;
- (void)loadBestTextIntoView;
- (void)cancelSymbolLoad;
- (void)startSymbolLoad;
- (BOOL)performDragOperation:(id)arg1;
- (void)_laodAndAnalyzeDroppedFiles:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)dragging:(id)arg1;
- (id)dragTypes;
- (void)setPickerForSymbolName:(id)arg1;
- (void)cancelAllQueryOperations;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_showISAReferenceGuide:(id)arg1;
- (void)_toggleInstructionDetails:(id)arg1;
- (void)_viewAsNatural:(id)arg1;
- (void)_viewAsPercentage:(id)arg1;
- (void)_viewAsValue:(id)arg1;
- (void)_reformatAnnotationsAs:(int)arg1;
- (void)_symbolChosen:(id)arg1;
- (id)_symbolForDisplayName:(id)arg1;
- (id)symbolNameForDisplayName:(id)arg1;
- (void)_segmentsAction:(id)arg1;
- (void)enableDualView:(BOOL)arg1;
- (void)_flipToCompliment:(id)arg1;
- (void)_refresh:(id)arg1;
- (void)showLoadingIndicator:(BOOL)arg1;
- (void)invalidate;
- (void)performCustomFindPanelAction:(id)arg1;
- (void)resetSourceViewToEmpty;
- (id)customWatermark;
- (void)refreshStatistics;
- (id)_symbol;
- (id)_defaultTargetLineColor;
- (id)dataElementsForLineNumber:(unsigned long long)arg1 inTextView:(id)arg2;
- (id)paragraphBorderHighlightColorForComments:(id)arg1;
- (double)importanceOfComments:(id)arg1;
- (void)clearDisasmAnnotations;
- (void)clearSourceAnnotations;
- (void)clearAnnotations;
- (void)addDisasmMarkupForQuery:(id)arg1;
- (void)addSourceMarkupForQuery:(id)arg1;
- (void)addAllMarkupForQuery:(id)arg1;
- (void)_statisticsQueryCompleted:(id)arg1;
- (void)_focusOnNewSymbol;
- (void)_setDisassemblyTextForFragment:(id)arg1 withSource:(id)arg2;
- (void)_setSourceTextToFragment:(id)arg1;
- (void)_showSourceEnabled;
- (void)_enableDualViewButton:(BOOL)arg1;
- (void)_setDualViewToolTip:(BOOL)arg1;
- (void)_enableCounterpartButton:(BOOL)arg1;
- (void)_setCounterpartToolTip:(id)arg1;
- (BOOL)_loadSourceForPath:(id)arg1 withContents:(id)arg2 ofType:(id)arg3;
- (void)_showSourceResolver:(id)arg1;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (void)_addNavigationLinks:(id)arg1 andFixedLineRange:(struct _NSRange *)arg2;
- (id)flattenSourceItem:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)setSelectedSymbol:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setWaterMarkVisibility:(int)arg1;
- (id)sourceManager;
- (void)_textSelectionDidChange:(id)arg1;
- (void)_findSelectedLinesInDisasmViewMultiClickInView:(id)arg1 withCodeManager:(id)arg2 extraLines:(unsigned long long)arg3 lineRange:(struct _NSRange)arg4 newLineRanges:(id)arg5 newCharRanges:(id)arg6;
- (void)_findSelectedLinesInDisasmViewSingleClickInView:(id)arg1 withCodeManager:(id)arg2 extraLines:(unsigned long long)arg3 lineRange:(struct _NSRange)arg4 newLineRanges:(id)arg5 newCharRanges:(id)arg6;
- (void)_findSelectedLinesInSourceViewAnyClickInView:(id)arg1 withCodeManager:(id)arg2 extraLines:(unsigned long long)arg3 lineRange:(struct _NSRange)arg4 newLineRanges:(id)arg5 newCharRanges:(id)arg6;
- (id)refreshDisasmSelectionInfo:(id)arg1;
- (id)refreshSourceViewSelectionInfo;
- (id)focusedSymbolTruncatedName;
- (id)focusedSymbolSourceFileNameAndPath:(id *)arg1 andExtension:(id *)arg2;
- (void)observeRun:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)getPersistentSyms:(id *)arg1 error:(id *)arg2;
- (BOOL)_getPersistentSymsLegacy:(id *)arg1 error:(id *)arg2;
- (void)applyCurrentFilter;
- (id)detailViewLabel;
- (id)classForNibName;
- (id)instrument;
- (void)dealloc;
- (id)initWithInstrument:(id)arg1;
- (void)enterProcessingState:(int)arg1;
- (void)enterDisplayState:(int)arg1;
- (void)wantsDisassembly;
- (void)wantsSource;
- (void)sourceLoadFailed;
- (void)disassemblyLoadFailed;
- (void)disassemblyLoaded;
- (void)sourceLoaded;
- (void)startRefresh;
- (void)refreshComplete;
- (void)loadFailed;
- (void)displayText;
- (void)loadText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRSourceTabViewAnnotationCell : NSTextFieldCell
{
}

- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

@interface XRSourceTabView : NSView <XRInspectorSource>
{
    NSTextField *_valueField;
    NSButton *_inspectorButton;
    BOOL _showInspectorButton;
    XRInstrument *_instrument;
    int _valueType;
    XRAnnotation *_textAnnotation;
    DVTTextView *_textView;
}

@property(nonatomic) DVTTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) XRAnnotation *textAnnotation; // @synthesize textAnnotation=_textAnnotation;
- (void).cxx_destruct;
- (void)showInspectorButton:(BOOL)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (struct CGRect)spotRect;
- (id)documentUUID;
- (id)dataElementsForInspector:(id)arg1;
- (void)inspectorDismissed:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)viewDidMoveToWindow;
- (void)toggleInspector:(id)arg1;
- (id)stringForValueType:(int)arg1;
- (int)valueType;
- (void)setValueType:(int)arg1;
- (void)setInstrument:(id)arg1;
- (void)setValue:(id)arg1;
- (struct CGRect)resetSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface XRMouseHighlighButtonCell : NSButtonCell
{
}

- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (BOOL)isOpaque;

@end

@interface XRMouseHighlighButton : NSButton
{
}

- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)mouseDown:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)isOpaque;

@end

@interface XRActivityView : NSView
{
    BOOL _isSetup;
    NSView *_layerView;
    CALayer *_backgroundLayer;
    CALayer *_backgroundColorLayer;
    XRActivityTextLayer *_runsLayer;
    XRActivityTextLayer *_timeLayer;
    NSDictionary *_textAttributes;
    BOOL _observingKeyWindowNotifications;
    NSString *_runsString;
    NSString *_timeString;
}

+ (struct CGSize)defaultSizeForToolbarDisplayMode:(unsigned long long)arg1 sizeMode:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)_activationStateChangedForWindow:(id)arg1;
- (void)_updateCurrentActivityReportForWindowActivationState;
- (void)_updateBackgroundColorForWindowActivationState;
- (void)setUpOrTearDown;
- (void)tearDown;
- (void)_handleKeyWindowNotificaiton:(id)arg1;
- (void)setup;
- (void)setupLayers;
- (id)_timeLayer;
- (id)_runsLayer;
- (id)_textLayerWithFrame:(struct CGRect)arg1 stringValue:(id)arg2;
- (id)_backgroundLayer;
- (id)_highlightColor;
- (id)_backgroundColor;
- (BOOL)_isActiveWindowState;
- (void)_updateHighlightColorForWindowActivationState;
- (struct CGRect)insetReportLayerBounds;
- (struct CGRect)insetRootLayerBounds;
@property(copy) NSString *timeString; // @synthesize timeString=_timeString;
@property(copy) NSString *runsString; // @synthesize runsString=_runsString;
@property struct CGSize contentSize;
- (void)sizeToFitToolbarDisplayMode:(unsigned long long)arg1 sizeMode:(unsigned long long)arg2;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface XRActivityViewBackgroundButton : NSButton
{
}

- (BOOL)mouseDownCanMoveWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface XRPageBrowserViewController : NSViewController
{
    id <XRPageBrowserDataSource> _datasource;
    NSButton *_pageBackButton;
    NSButton *_pageForwardButton;
    NSSegmentedControl *_pageMarkers;
    NSBox *_box;
    NSTextField *_label;
    unsigned long long _pageIndex;
    unsigned long long _pageCount;
    NSView *_currentView;
}

@property(retain) NSView *currentView; // @synthesize currentView=_currentView;
@property unsigned long long pageCount; // @synthesize pageCount=_pageCount;
@property unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property __weak NSTextField *label; // @synthesize label=_label;
@property __weak NSBox *box; // @synthesize box=_box;
@property __weak NSSegmentedControl *pageMarkers; // @synthesize pageMarkers=_pageMarkers;
@property __weak NSButton *pageForwardButton; // @synthesize pageForwardButton=_pageForwardButton;
@property __weak NSButton *pageBackButton; // @synthesize pageBackButton=_pageBackButton;
- (void).cxx_destruct;
- (void)pageForwardAction:(id)arg1;
- (void)pageBackAction:(id)arg1;
- (void)pageMarkersCallback:(id)arg1;
@property __weak id <XRPageBrowserDataSource> datasource; // @synthesize datasource=_datasource;
- (void)updatePage;
- (void)awakeFromNib;
- (id)init;

@end

@interface XRStrategyUIControllerState : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _revealSelection;
    double _timelineGraphYOffset;
    XRIntKeyedDictionary *_userInterfacePlansByRunNumber;
    id <NSObject><NSSecureCoding> _selection;
}

+ (BOOL)supportsSecureCoding;
+ (id)encodedKeyClasses;
+ (id)archivableKeys;
@property(nonatomic) BOOL revealSelection; // @synthesize revealSelection=_revealSelection;
@property(retain, nonatomic) id <NSObject><NSSecureCoding> selection; // @synthesize selection=_selection;
@property(retain, nonatomic) XRIntKeyedDictionary *userInterfacePlansByRunNumber; // @synthesize userInterfacePlansByRunNumber=_userInterfacePlansByRunNumber;
@property(nonatomic) double timelineGraphYOffset; // @synthesize timelineGraphYOffset=_timelineGraphYOffset;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

@interface XRFlatCheckboxCell : NSButtonCell
{
    BOOL _inTitleRectCheck;
}

- (id)attributedTitle;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_imageRectWithRect:(struct CGRect *)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;

@end

@interface XRTextView : DVTSourceTextView <XREditableEntity>
{
    NSMutableArray *_commentObservers;
    id <XRTextViewDragDestination> _dragDestinationDelegate;
    BOOL _displaysVerticalMarkupInScroller;
    BOOL _isDirty;
    BOOL _disassembledTextOnly;
}

- (void).cxx_destruct;
- (BOOL)isDirty;
- (void)setIsDirty:(BOOL)arg1;
- (void)_userDidEditText:(id)arg1;
- (void)viewDidMoveToWindow;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (id)writablePasteboardTypes;
- (id)readablePasteboardTypes;
- (BOOL)displaysVerticalMarkupInScroller;
- (void)setDisplaysVerticalMarkupInScroller:(BOOL)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)dragDestinationDelegate;
- (void)setDragDestinationDelegate:(id)arg1;
- (void)display;
- (BOOL)shouldTrimTrailingWhitespace;
- (void)clearSourceComments;
- (void)setSourceComments:(id)arg1 withDisplayType:(int)arg2;
- (void)addCommentObserver:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

#endif /* InstrumentsKit_framework2_h */
