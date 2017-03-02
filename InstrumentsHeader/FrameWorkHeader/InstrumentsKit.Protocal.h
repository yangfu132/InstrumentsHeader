//
//  InstrumentsKit.Protocal.h
//  MacDemo
//
//  Created by szzc on 2016/11/25.
//  Copyright © 2016年 szzc. All rights reserved.
//

#ifndef InstrumentsKit_Protocal_h
#define InstrumentsKit_Protocal_h
@protocol CommonSymbol <NSCoding, NSObject>
- (NSString *)libraryPath;
- (NSString *)libraryName;
- (NSString *)symbolName;
- (int)pid;
- (unsigned long long)lineNumber;
- (NSString *)sourcePath;
- (unsigned long long)address;

@optional
- (PFTSymbolData *)resolvedSymbol;
@end

@protocol CommonTimeSample <NSCoding, NSObject>
- (id)extendedData;
- (id <CommonRawStack>)backtrace;
- (double)weight;
- (int)quantity;
- (unsigned long long)thread;
- (unsigned int)eventType;
- (unsigned long long)timestamp;

@optional
- (double)weightAtIndex:(unsigned int)arg1;
- (unsigned int)cpuIndex;
@end

@protocol DTRenderableContentProviderDelegate <NSObject>

@optional
- (void)providerHasNewResponse:(DTRenderableContentProvider *)arg1;
@end

@protocol DTTimelineGraphDelegate <NSObject>
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsHeight:(double)arg2 forPlane:(DTTimelinePlane *)arg3;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsCollapsingGroupPlane:(DTTimelineGroupPlane *)arg2;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsExpandingGroupPlane:(DTTimelineGroupPlane *)arg2;
- (void)inputHandlerRequestsToClearInspectionInfoForGraph:(DTTimelineGraph *)arg1;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsNanosecondsPerPoint:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearCurrentInspectionTimeForGraph:(DTTimelineGraph *)arg1;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsCurrentInspectionTime:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearSelectedTimeRangeForGraph:(DTTimelineGraph *)arg1;
- (void)inputHandlerDidFinishSelectionForGraph:(DTTimelineGraph *)arg1;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsSelectedTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestYOffset:(double)arg2;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsNanosecondOffset:(long long)arg2;

@optional
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsDisplayInspectionInfoForNanosecond:(unsigned long long)arg2 point:(struct CGPoint)arg3;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsEndLongPressDragAtTime:(unsigned long long)arg2;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsLongPressDragToTime:(unsigned long long)arg2;
- (BOOL)inputHandlerForGraph:(DTTimelineGraph *)arg1 requestsLongPressDragBeginAtTime:(unsigned long long)arg2 onPlanes:(NSSet *)arg3;
- (void)inputHandlerForGraph:(DTTimelineGraph *)arg1 unhandledClickAtTime:(unsigned long long)arg2 clickCount:(long long)arg3 onPlanes:(NSSet *)arg4;
@end

@protocol DVTChooserViewDelegate <NSObject>

@optional
- (void)chooserView:(DVTChooserView *)arg1 userDidDoubleClickChoice:(DVTChoice *)arg2;
- (void)chooserView:(DVTChooserView *)arg1 userDidSelectChoices:(NSArray *)arg2;
- (void)chooserView:(DVTChooserView *)arg1 userWillSelectChoices:(NSArray *)arg2;
@end

@protocol DVTCompletingTextViewDelegate <NSTextViewDelegate>

@optional
- (NSColor *)textView:(DVTCompletingTextView *)arg1 tokenTintColor:(NSColor *)arg2 forInlineTokenAttachmentCell:(NSTextAttachmentCell *)arg3;
- (long long)textView:(DVTCompletingTextView *)arg1 interiorBackgroundStyle:(long long)arg2 forInlineTokenAttachmentCell:(NSTextAttachmentCell *)arg3;
- (void)setupTextViewContextMenuWithMenu:(NSMenu *)arg1;
- (NSDictionary *)syntaxColoringContextForTextView:(DVTCompletingTextView *)arg1;
- (BOOL)completingTextViewHandleCancel:(DVTCompletingTextView *)arg1;
- (unsigned long long)textView:(DVTCompletingTextView *)arg1 lineEndingForWritingSelectionToPasteboard:(NSPasteboard *)arg2 type:(NSString *)arg3;
- (unsigned long long)textView:(DVTCompletingTextView *)arg1 lineEndingForReadingSelectionFromPasteboard:(NSPasteboard *)arg2 type:(NSString *)arg3;
- (void)textView:(DVTCompletingTextView *)arg1 layoutManager:(NSLayoutManager *)arg2 didLayoutGlyphsUpToCharacterIndex:(unsigned long long)arg3;
- (DVTTextDocumentLocation *)completingTextView:(DVTCompletingTextView *)arg1 documentLocationForWordStartLocation:(unsigned long long)arg2;
- (void)completingTextView:(DVTCompletingTextView *)arg1 willPassContextToStrategies:(NSMutableDictionary *)arg2 atWordStartLocation:(unsigned long long)arg3;
@end

@protocol DVTMessageBubbleAnnotationDelegate <DVTTextAnnotationDelegate>

@optional
- (void)didClickMessageBubbleForAnnotation:(DVTMessageBubbleAnnotation *)arg1 onIcon:(BOOL)arg2 inTextView:(DVTSourceTextView *)arg3 event:(NSEvent *)arg4;
@end

@protocol DVTOutlineViewDelegate <NSOutlineViewDelegate>

@optional
- (Class)outlineView:(DVTOutlineView *)arg1 groupRowCellClassForDataCell:(NSCell *)arg2;
- (NSFont *)outlineViewGroupRowFont:(DVTOutlineView *)arg1;
- (BOOL)outlineView:(DVTOutlineView *)arg1 shouldMouseHoverForTableColumn:(NSTableColumn *)arg2 row:(long long)arg3;
- (void)outlineView:(DVTOutlineView *)arg1 concludeDragOperation:(id <NSDraggingInfo>)arg2;
- (unsigned long long)outlineView:(DVTOutlineView *)arg1 draggingSourceOperationMaskForLocal:(BOOL)arg2;
- (void)outlineView:(DVTOutlineView *)arg1 draggingDidEnd:(id <NSDraggingInfo>)arg2;
- (void)outlineView:(DVTOutlineView *)arg1 draggingDidUpdate:(id <NSDraggingInfo>)arg2;
- (void)outlineView:(DVTOutlineView *)arg1 draggingDidEnter:(id <NSDraggingInfo>)arg2;
- (BOOL)outlineView:(DVTOutlineView *)arg1 insertText:(NSString *)arg2;
- (BOOL)outlineView:(DVTOutlineView *)arg1 doCommandBySelector:(SEL)arg2;
@end

@protocol DVTSourceTextViewDelegate <DVTCompletingTextViewDelegate>

@optional
- (double)textView:(DVTSourceTextView *)arg1 constrainAccessoryAnnotationWidth:(double)arg2;
- (double)textView:(DVTSourceTextView *)arg1 constrainMaxAccessoryAnnotationWidth:(double)arg2;
- (double)textView:(DVTSourceTextView *)arg1 constrainMinAccessoryAnnotationWidth:(double)arg2;
- (id <DVTMediaResourceProvider>)mediaResourceProviderInTextView:(DVTSourceTextView *)arg1;
- (NSArray *)directoriesForLiteralsInTextView:(DVTSourceTextView *)arg1;
- (BOOL)textView:(DVTSourceTextView *)arg1 shouldReadObjectLiteralFromPasteboard:(NSPasteboard *)arg2 type:(NSString *)arg3;
- (void)textView:(DVTSourceTextView *)arg1 objectLiteralStringsForObjects:(NSArray *)arg2 completionBlock:(void (^)(NSArray *, NSError *))arg3;
- (NSString *)textViewWillReturnPrintJobTitle:(DVTSourceTextView *)arg1;
- (void)textViewDidScroll:(DVTSourceTextView *)arg1;
- (void)setupGutterContextMenuWithMenu:(NSMenu *)arg1;
- (void)didEndTokenizedEditingWithRanges:(DVTMutableRangeArray *)arg1;
- (void)willStartTokenizedEditingWithRanges:(DVTMutableRangeArray *)arg1;
- (void)tokenizableRangesWithRange:(struct _NSRange)arg1 completionBlock:(void (^)(NSArray *))arg2;
- (void)textViewDidFinishAnimatingScroll:(DVTSourceTextView *)arg1;
- (void)textViewDidLoadAnnotationProviders:(DVTSourceTextView *)arg1;
- (void)textView:(DVTSourceTextView *)arg1 didRemoveAnnotations:(NSArray *)arg2;
- (void)textView:(DVTSourceTextView *)arg1 didAddAnnotations:(NSArray *)arg2;
- (DVTAnnotationContext *)annotationContextForTextView:(DVTSourceTextView *)arg1;
- (void)textViewDidChangeFolding:(NSNotification *)arg1;
- (void)textViewWillChangeFolding:(NSNotification *)arg1;
- (void)textView:(DVTSourceTextView *)arg1 didClickOnTemporaryLinkAtCharacterIndex:(unsigned long long)arg2 event:(NSEvent *)arg3 isAltEvent:(BOOL)arg4;
- (BOOL)textView:(DVTSourceTextView *)arg1 shouldShowTemporaryLinkForCharacterAtIndex:(unsigned long long)arg2 proposedRange:(struct _NSRange)arg3 effectiveRanges:(id *)arg4;
- (void)textView:(DVTSourceTextView *)arg1 handleMouseDidExitSidebar:(NSEvent *)arg2;
- (void)textView:(DVTSourceTextView *)arg1 handleMouseDidMoveOverSidebar:(NSEvent *)arg2 atLineNumber:(unsigned long long)arg3;
- (void)textView:(DVTSourceTextView *)arg1 handleMouseDownInSidebar:(NSEvent *)arg2 atLineNumber:(unsigned long long)arg3;
@end

@protocol DVTTextAnnotationDelegate <NSObject>

@optional
- (void)annotation:(DVTTextAnnotation *)arg1 willDrawInTextSidebarView:(DVTTextSidebarView *)arg2 withAnnotationsInSameLine:(NSSet *)arg3;
- (BOOL)annotation:(DVTTextAnnotation *)arg1 shouldDrawInTextSidebarView:(DVTTextSidebarView *)arg2 withAnnotationsInSameLine:(NSSet *)arg3;
- (double)sidebarMarkerOpacityForAnnotation:(DVTTextAnnotation *)arg1;
- (BOOL)shouldMoveCursorForAnnotation:(DVTTextAnnotation *)arg1;
- (NSArray *)contextMenuItemsForAnnotation:(DVTTextAnnotation *)arg1 inTextSidebarView:(DVTTextSidebarView *)arg2;
- (void)didRecognizeGestureInAnnotation:(DVTTextAnnotation *)arg1 inTextSidebarView:(DVTTextSidebarView *)arg2 recognizer:(NSGestureRecognizer *)arg3;
- (void)didDeleteOrReplaceParagraphForAnnotation:(DVTTextAnnotation *)arg1;
- (void)didRemoveAnnotation:(DVTAnnotation *)arg1;
- (void)didMoveAnnotation:(DVTAnnotation *)arg1;
- (unsigned long long)annotation:(DVTTextAnnotation *)arg1 willMoveToParagraphNumber:(unsigned long long)arg2;
- (void)didDragAnnotation:(DVTAnnotation *)arg1 inTextSidebarView:(DVTTextSidebarView *)arg2 event:(NSEvent *)arg3;
- (void)didEndRolloverOnAnnotation:(DVTAnnotation *)arg1 inTextSidebarView:(DVTTextSidebarView *)arg2 event:(NSEvent *)arg3;
- (void)didBeginRolloverOnAnnotation:(DVTAnnotation *)arg1 inTextSidebarView:(DVTTextSidebarView *)arg2 event:(NSEvent *)arg3;
- (void)didClickAnnotation:(DVTAnnotation *)arg1 inTextSidebarView:(DVTTextSidebarView *)arg2 event:(NSEvent *)arg3;
@end

@protocol DVTWindowActivationStateObserver <NSObject>
- (void)window:(NSWindow *)arg1 didChangeActivationState:(long long)arg2;
@end

@protocol NSAccessibilityElement <NSObject>
- (id)accessibilityParent;
- (struct CGRect)accessibilityFrame;

@optional
- (NSString *)accessibilityIdentifier;
- (BOOL)isAccessibilityFocused;
@end

@protocol NSAccessibilityGroup <NSAccessibilityElement>
@end

@protocol NSAccessibilityOutline <NSAccessibilityTable>
@end

@protocol NSAccessibilityRow <NSAccessibilityGroup>
- (long long)accessibilityIndex;

@optional
- (long long)accessibilityDisclosureLevel;
@end

@protocol NSAccessibilityTable <NSAccessibilityGroup>
- (NSArray *)accessibilityRows;
- (NSString *)accessibilityLabel;

@optional
- (NSArray *)accessibilityColumnHeaderUIElements;
- (NSArray *)accessibilityRowHeaderUIElements;
- (NSArray *)accessibilityVisibleCells;
- (NSArray *)accessibilitySelectedCells;
- (NSString *)accessibilityHeaderGroup;
- (NSArray *)accessibilitySelectedColumns;
- (NSArray *)accessibilityVisibleColumns;
- (NSArray *)accessibilityColumns;
- (NSArray *)accessibilityVisibleRows;
- (void)setAccessibilitySelectedRows:(NSArray *)arg1;
- (NSArray *)accessibilitySelectedRows;
@end

@protocol NSAnimationDelegate <NSObject>

@optional
- (void)animation:(NSAnimation *)arg1 didReachProgressMark:(float)arg2;
- (float)animation:(NSAnimation *)arg1 valueForProgress:(float)arg2;
- (void)animationDidEnd:(NSAnimation *)arg1;
- (void)animationDidStop:(NSAnimation *)arg1;
- (BOOL)animationShouldStart:(NSAnimation *)arg1;
@end

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSCollectionViewDelegate <NSObject>

@optional
- (NSCollectionViewTransitionLayout *)collectionView:(NSCollectionView *)arg1 transitionLayoutForOldLayout:(NSCollectionViewLayout *)arg2 newLayout:(NSCollectionViewLayout *)arg3;
- (void)collectionView:(NSCollectionView *)arg1 didEndDisplayingSupplementaryView:(NSView *)arg2 forElementOfKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)collectionView:(NSCollectionView *)arg1 didEndDisplayingItem:(NSCollectionViewItem *)arg2 forRepresentedObjectAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(NSCollectionView *)arg1 willDisplaySupplementaryView:(NSView *)arg2 forElementKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)collectionView:(NSCollectionView *)arg1 willDisplayItem:(NSCollectionViewItem *)arg2 forRepresentedObjectAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(NSCollectionView *)arg1 didDeselectItemsAtIndexPaths:(NSSet *)arg2;
- (void)collectionView:(NSCollectionView *)arg1 didSelectItemsAtIndexPaths:(NSSet *)arg2;
- (NSSet *)collectionView:(NSCollectionView *)arg1 shouldDeselectItemsAtIndexPaths:(NSSet *)arg2;
- (NSSet *)collectionView:(NSCollectionView *)arg1 shouldSelectItemsAtIndexPaths:(NSSet *)arg2;
- (void)collectionView:(NSCollectionView *)arg1 didChangeItemsAtIndexPaths:(NSSet *)arg2 toHighlightState:(long long)arg3;
- (NSSet *)collectionView:(NSCollectionView *)arg1 shouldChangeItemsAtIndexPaths:(NSSet *)arg2 toHighlightState:(long long)arg3;
- (void)collectionView:(NSCollectionView *)arg1 updateDraggingItemsForDrag:(id <NSDraggingInfo>)arg2;
- (void)collectionView:(NSCollectionView *)arg1 draggingSession:(NSDraggingSession *)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (void)collectionView:(NSCollectionView *)arg1 draggingSession:(NSDraggingSession *)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItemsAtIndexes:(NSIndexSet *)arg4;
- (void)collectionView:(NSCollectionView *)arg1 draggingSession:(NSDraggingSession *)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItemsAtIndexPaths:(NSSet *)arg4;
- (id <NSPasteboardWriting>)collectionView:(NSCollectionView *)arg1 pasteboardWriterForItemAtIndex:(unsigned long long)arg2;
- (id <NSPasteboardWriting>)collectionView:(NSCollectionView *)arg1 pasteboardWriterForItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)collectionView:(NSCollectionView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 index:(long long)arg3 dropOperation:(long long)arg4;
- (BOOL)collectionView:(NSCollectionView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 indexPath:(NSIndexPath *)arg3 dropOperation:(long long)arg4;
- (unsigned long long)collectionView:(NSCollectionView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 proposedIndex:(long long *)arg3 dropOperation:(long long *)arg4;
- (unsigned long long)collectionView:(NSCollectionView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 proposedIndexPath:(id *)arg3 dropOperation:(long long *)arg4;
- (NSImage *)collectionView:(NSCollectionView *)arg1 draggingImageForItemsAtIndexes:(NSIndexSet *)arg2 withEvent:(NSEvent *)arg3 offset:(struct CGPoint *)arg4;
- (NSImage *)collectionView:(NSCollectionView *)arg1 draggingImageForItemsAtIndexPaths:(NSSet *)arg2 withEvent:(NSEvent *)arg3 offset:(struct CGPoint *)arg4;
- (NSArray *)collectionView:(NSCollectionView *)arg1 namesOfPromisedFilesDroppedAtDestination:(NSURL *)arg2 forDraggedItemsAtIndexes:(NSIndexSet *)arg3;
- (NSArray *)collectionView:(NSCollectionView *)arg1 namesOfPromisedFilesDroppedAtDestination:(NSURL *)arg2 forDraggedItemsAtIndexPaths:(NSSet *)arg3;
- (BOOL)collectionView:(NSCollectionView *)arg1 writeItemsAtIndexes:(NSIndexSet *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (BOOL)collectionView:(NSCollectionView *)arg1 writeItemsAtIndexPaths:(NSSet *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (BOOL)collectionView:(NSCollectionView *)arg1 canDragItemsAtIndexes:(NSIndexSet *)arg2 withEvent:(NSEvent *)arg3;
- (BOOL)collectionView:(NSCollectionView *)arg1 canDragItemsAtIndexPaths:(NSSet *)arg2 withEvent:(NSEvent *)arg3;
@end

@protocol NSComboBoxDataSource <NSObject>

@optional
- (NSString *)comboBox:(NSComboBox *)arg1 completedString:(NSString *)arg2;
- (unsigned long long)comboBox:(NSComboBox *)arg1 indexOfItemWithStringValue:(NSString *)arg2;
- (id)comboBox:(NSComboBox *)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(NSComboBox *)arg1;
@end

@protocol NSComboBoxDelegate <NSTextFieldDelegate>

@optional
- (void)comboBoxSelectionIsChanging:(NSNotification *)arg1;
- (void)comboBoxSelectionDidChange:(NSNotification *)arg1;
- (void)comboBoxWillDismiss:(NSNotification *)arg1;
- (void)comboBoxWillPopUp:(NSNotification *)arg1;
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

@protocol NSDraggingDestination <NSObject>

@optional
- (void)updateDraggingItemsForDrag:(id <NSDraggingInfo>)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id <NSDraggingInfo>)arg1;
- (void)concludeDragOperation:(id <NSDraggingInfo>)arg1;
- (BOOL)performDragOperation:(id <NSDraggingInfo>)arg1;
- (BOOL)prepareForDragOperation:(id <NSDraggingInfo>)arg1;
- (void)draggingExited:(id <NSDraggingInfo>)arg1;
- (unsigned long long)draggingUpdated:(id <NSDraggingInfo>)arg1;
- (unsigned long long)draggingEntered:(id <NSDraggingInfo>)arg1;
@end

@protocol NSMenuDelegate <NSObject>

@optional
- (struct CGRect)confinementRectForMenu:(NSMenu *)arg1 onScreen:(NSScreen *)arg2;
- (void)menu:(NSMenu *)arg1 willHighlightItem:(NSMenuItem *)arg2;
- (void)menuDidClose:(NSMenu *)arg1;
- (void)menuWillOpen:(NSMenu *)arg1;
- (BOOL)menuHasKeyEquivalent:(NSMenu *)arg1 forEvent:(NSEvent *)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (BOOL)menu:(NSMenu *)arg1 updateItem:(NSMenuItem *)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (long long)numberOfItemsInMenu:(NSMenu *)arg1;
- (void)menuNeedsUpdate:(NSMenu *)arg1;
@end

@protocol NSMutableCopying
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
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

@protocol NSOpenSavePanelDelegate <NSObject>

@optional
- (void)panelSelectionDidChange:(id)arg1;
- (void)panel:(id)arg1 willExpand:(BOOL)arg2;
- (NSString *)panel:(id)arg1 userEnteredFilename:(NSString *)arg2 confirmed:(BOOL)arg3;
- (void)panel:(id)arg1 didChangeToDirectoryURL:(NSURL *)arg2;
- (BOOL)panel:(id)arg1 validateURL:(NSURL *)arg2 error:(id *)arg3;
- (BOOL)panel:(id)arg1 shouldEnableURL:(NSURL *)arg2;
@end

@protocol NSOutlineViewDataSource <NSObject>

@optional
- (NSArray *)outlineView:(NSOutlineView *)arg1 namesOfPromisedFilesDroppedAtDestination:(NSURL *)arg2 forDraggedItems:(NSArray *)arg3;
- (BOOL)outlineView:(NSOutlineView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(NSOutlineView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (void)outlineView:(NSOutlineView *)arg1 updateDraggingItemsForDrag:(id <NSDraggingInfo>)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 writeItems:(NSArray *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (void)outlineView:(NSOutlineView *)arg1 draggingSession:(NSDraggingSession *)arg2 endedAtPoint:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)outlineView:(NSOutlineView *)arg1 draggingSession:(NSDraggingSession *)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItems:(NSArray *)arg4;
- (id <NSPasteboardWriting>)outlineView:(NSOutlineView *)arg1 pasteboardWriterForItem:(id)arg2;
- (void)outlineView:(NSOutlineView *)arg1 sortDescriptorsDidChange:(NSArray *)arg2;
- (id)outlineView:(NSOutlineView *)arg1 persistentObjectForItem:(id)arg2;
- (id)outlineView:(NSOutlineView *)arg1 itemForPersistentObject:(id)arg2;
- (void)outlineView:(NSOutlineView *)arg1 setObjectValue:(id)arg2 forTableColumn:(NSTableColumn *)arg3 byItem:(id)arg4;
- (id)outlineView:(NSOutlineView *)arg1 objectValueForTableColumn:(NSTableColumn *)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(NSOutlineView *)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(NSOutlineView *)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(NSOutlineView *)arg1 numberOfChildrenOfItem:(id)arg2;
@end

@protocol NSOutlineViewDelegate <NSControlTextEditingDelegate>

@optional
- (void)outlineViewItemDidCollapse:(NSNotification *)arg1;
- (void)outlineViewItemWillCollapse:(NSNotification *)arg1;
- (void)outlineViewItemDidExpand:(NSNotification *)arg1;
- (void)outlineViewItemWillExpand:(NSNotification *)arg1;
- (void)outlineViewSelectionIsChanging:(NSNotification *)arg1;
- (void)outlineViewColumnDidResize:(NSNotification *)arg1;
- (void)outlineViewColumnDidMove:(NSNotification *)arg1;
- (void)outlineViewSelectionDidChange:(NSNotification *)arg1;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
- (double)outlineView:(NSOutlineView *)arg1 sizeToFitWidthOfColumn:(long long)arg2;
- (void)outlineView:(NSOutlineView *)arg1 willDisplayOutlineCell:(id)arg2 forTableColumn:(NSTableColumn *)arg3 item:(id)arg4;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldExpandItem:(id)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 isGroupItem:(id)arg2;
- (NSCell *)outlineView:(NSOutlineView *)arg1 dataCellForTableColumn:(NSTableColumn *)arg2 item:(id)arg3;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldTrackCell:(NSCell *)arg2 forTableColumn:(NSTableColumn *)arg3 item:(id)arg4;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldShowCellExpansionForTableColumn:(NSTableColumn *)arg2 item:(id)arg3;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldTypeSelectForEvent:(NSEvent *)arg2 withCurrentSearchString:(NSString *)arg3;
- (id)outlineView:(NSOutlineView *)arg1 nextTypeSelectMatchFromItem:(id)arg2 toItem:(id)arg3 forString:(NSString *)arg4;
- (NSString *)outlineView:(NSOutlineView *)arg1 typeSelectStringForTableColumn:(NSTableColumn *)arg2 item:(id)arg3;
- (double)outlineView:(NSOutlineView *)arg1 heightOfRowByItem:(id)arg2;
- (NSString *)outlineView:(NSOutlineView *)arg1 toolTipForCell:(NSCell *)arg2 rect:(struct CGRect *)arg3 tableColumn:(NSTableColumn *)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)outlineView:(NSOutlineView *)arg1 didDragTableColumn:(NSTableColumn *)arg2;
- (void)outlineView:(NSOutlineView *)arg1 didClickTableColumn:(NSTableColumn *)arg2;
- (void)outlineView:(NSOutlineView *)arg1 mouseDownInHeaderOfTableColumn:(NSTableColumn *)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldSelectTableColumn:(NSTableColumn *)arg2;
- (NSIndexSet *)outlineView:(NSOutlineView *)arg1 selectionIndexesForProposedSelection:(NSIndexSet *)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldSelectItem:(id)arg2;
- (BOOL)selectionShouldChangeInOutlineView:(NSOutlineView *)arg1;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldEditTableColumn:(NSTableColumn *)arg2 item:(id)arg3;
- (void)outlineView:(NSOutlineView *)arg1 willDisplayCell:(id)arg2 forTableColumn:(NSTableColumn *)arg3 item:(id)arg4;
- (void)outlineView:(NSOutlineView *)arg1 didRemoveRowView:(NSTableRowView *)arg2 forRow:(long long)arg3;
- (void)outlineView:(NSOutlineView *)arg1 didAddRowView:(NSTableRowView *)arg2 forRow:(long long)arg3;
- (NSTableRowView *)outlineView:(NSOutlineView *)arg1 rowViewForItem:(id)arg2;
- (NSView *)outlineView:(NSOutlineView *)arg1 viewForTableColumn:(NSTableColumn *)arg2 item:(id)arg3;
@end

@protocol NSPathCellDelegate <NSObject>

@optional
- (void)pathCell:(NSPathCell *)arg1 willPopUpMenu:(NSMenu *)arg2;
- (void)pathCell:(NSPathCell *)arg1 willDisplayOpenPanel:(NSOpenPanel *)arg2;
@end

@protocol NSPathControlDelegate <NSObject>

@optional
- (void)pathControl:(NSPathControl *)arg1 willPopUpMenu:(NSMenu *)arg2;
- (void)pathControl:(NSPathControl *)arg1 willDisplayOpenPanel:(NSOpenPanel *)arg2;
- (BOOL)pathControl:(NSPathControl *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2;
- (unsigned long long)pathControl:(NSPathControl *)arg1 validateDrop:(id <NSDraggingInfo>)arg2;
- (BOOL)pathControl:(NSPathControl *)arg1 shouldDragPathComponentCell:(NSPathComponentCell *)arg2 withPasteboard:(NSPasteboard *)arg3;
- (BOOL)pathControl:(NSPathControl *)arg1 shouldDragItem:(NSPathControlItem *)arg2 withPasteboard:(NSPasteboard *)arg3;
@end

@protocol NSPopoverDelegate <NSObject>

@optional
- (void)popoverDidClose:(NSNotification *)arg1;
- (void)popoverWillClose:(NSNotification *)arg1;
- (void)popoverDidShow:(NSNotification *)arg1;
- (void)popoverWillShow:(NSNotification *)arg1;
- (NSWindow *)detachableWindowForPopover:(NSPopover *)arg1;
- (void)popoverDidDetach:(NSPopover *)arg1;
- (BOOL)popoverShouldDetach:(NSPopover *)arg1;
- (BOOL)popoverShouldClose:(NSPopover *)arg1;
@end

@protocol NSSearchFieldDelegate <NSTextFieldDelegate>

@optional
- (void)searchFieldDidEndSearching:(NSSearchField *)arg1;
- (void)searchFieldDidStartSearching:(NSSearchField *)arg1;
@end

@protocol NSSecureCoding <NSCoding>
+ (BOOL)supportsSecureCoding;
@end

@protocol NSSplitViewDelegate <NSObject>

@optional
- (void)splitViewDidResizeSubviews:(NSNotification *)arg1;
- (void)splitViewWillResizeSubviews:(NSNotification *)arg1;
- (struct CGRect)splitView:(NSSplitView *)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (struct CGRect)splitView:(NSSplitView *)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (BOOL)splitView:(NSSplitView *)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (BOOL)splitView:(NSSplitView *)arg1 shouldAdjustSizeOfSubview:(NSView *)arg2;
- (void)splitView:(NSSplitView *)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(NSSplitView *)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(NSSplitView *)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(NSSplitView *)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(NSSplitView *)arg1 shouldCollapseSubview:(NSView *)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (BOOL)splitView:(NSSplitView *)arg1 canCollapseSubview:(NSView *)arg2;
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

@protocol NSTextDelegate <NSObject>

@optional
- (void)textDidChange:(NSNotification *)arg1;
- (void)textDidEndEditing:(NSNotification *)arg1;
- (void)textDidBeginEditing:(NSNotification *)arg1;
- (BOOL)textShouldEndEditing:(NSText *)arg1;
- (BOOL)textShouldBeginEditing:(NSText *)arg1;
@end

@protocol NSTextFieldDelegate <NSControlTextEditingDelegate>

@optional
- (BOOL)textField:(NSTextField *)arg1 textView:(NSTextView *)arg2 shouldSelectCandidateAtIndex:(unsigned long long)arg3;
- (NSArray *)textField:(NSTextField *)arg1 textView:(NSTextView *)arg2 candidates:(NSArray *)arg3 forSelectedRange:(struct _NSRange)arg4;
- (NSArray *)textField:(NSTextField *)arg1 textView:(NSTextView *)arg2 candidatesForSelectedRange:(struct _NSRange)arg3;
@end

@protocol NSTextViewDelegate <NSTextDelegate>

@optional
- (void)textView:(NSTextView *)arg1 draggedCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 event:(NSEvent *)arg4;
- (void)textView:(NSTextView *)arg1 doubleClickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3;
- (void)textView:(NSTextView *)arg1 clickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3;
- (BOOL)textView:(NSTextView *)arg1 clickedOnLink:(id)arg2;
- (BOOL)textView:(NSTextView *)arg1 shouldSelectCandidateAtIndex:(unsigned long long)arg2;
- (NSArray *)textView:(NSTextView *)arg1 candidates:(NSArray *)arg2 forSelectedRange:(struct _NSRange)arg3;
- (NSArray *)textView:(NSTextView *)arg1 candidatesForSelectedRange:(struct _NSRange)arg2;
- (NSArray *)textView:(NSTextView *)arg1 shouldUpdateTouchBarItemIdentifiers:(NSArray *)arg2;
- (NSUndoManager *)undoManagerForTextView:(NSTextView *)arg1;
- (NSSharingServicePicker *)textView:(NSTextView *)arg1 willShowSharingServicePicker:(NSSharingServicePicker *)arg2 forItems:(NSArray *)arg3;
- (NSURL *)textView:(NSTextView *)arg1 URLForContentsOfTextAttachment:(NSTextAttachment *)arg2 atIndex:(unsigned long long)arg3;
- (NSArray *)textView:(NSTextView *)arg1 didCheckTextInRange:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(NSDictionary *)arg4 results:(NSArray *)arg5 orthography:(NSOrthography *)arg6 wordCount:(long long)arg7;
- (NSDictionary *)textView:(NSTextView *)arg1 willCheckTextInRange:(struct _NSRange)arg2 options:(NSDictionary *)arg3 types:(unsigned long long *)arg4;
- (NSMenu *)textView:(NSTextView *)arg1 menu:(NSMenu *)arg2 forEvent:(NSEvent *)arg3 atIndex:(unsigned long long)arg4;
- (long long)textView:(NSTextView *)arg1 shouldSetSpellingState:(long long)arg2 range:(struct _NSRange)arg3;
- (BOOL)textView:(NSTextView *)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)textView:(NSTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (NSArray *)textView:(NSTextView *)arg1 completions:(NSArray *)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;
- (NSString *)textView:(NSTextView *)arg1 willDisplayToolTip:(NSString *)arg2 forCharacterAtIndex:(unsigned long long)arg3;
- (void)textViewDidChangeTypingAttributes:(NSNotification *)arg1;
- (void)textViewDidChangeSelection:(NSNotification *)arg1;
- (NSDictionary *)textView:(NSTextView *)arg1 shouldChangeTypingAttributes:(NSDictionary *)arg2 toAttributes:(NSDictionary *)arg3;
- (BOOL)textView:(NSTextView *)arg1 shouldChangeTextInRanges:(NSArray *)arg2 replacementStrings:(NSArray *)arg3;
- (NSArray *)textView:(NSTextView *)arg1 willChangeSelectionFromCharacterRanges:(NSArray *)arg2 toCharacterRanges:(NSArray *)arg3;
- (struct _NSRange)textView:(NSTextView *)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (BOOL)textView:(NSTextView *)arg1 writeCell:(id <NSTextAttachmentCell>)arg2 atIndex:(unsigned long long)arg3 toPasteboard:(NSPasteboard *)arg4 type:(NSString *)arg5;
- (NSArray *)textView:(NSTextView *)arg1 writablePasteboardTypesForCell:(id <NSTextAttachmentCell>)arg2 atIndex:(unsigned long long)arg3;
- (void)textView:(NSTextView *)arg1 draggedCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 event:(NSEvent *)arg4 atIndex:(unsigned long long)arg5;
- (void)textView:(NSTextView *)arg1 doubleClickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (void)textView:(NSTextView *)arg1 clickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (BOOL)textView:(NSTextView *)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
@end

@protocol NSTokenFieldDelegate <NSTextFieldDelegate>

@optional
- (unsigned long long)tokenField:(NSTokenField *)arg1 styleForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(NSTokenField *)arg1 hasMenuForRepresentedObject:(id)arg2;
- (NSMenu *)tokenField:(NSTokenField *)arg1 menuForRepresentedObject:(id)arg2;
- (NSArray *)tokenField:(NSTokenField *)arg1 readFromPasteboard:(NSPasteboard *)arg2;
- (BOOL)tokenField:(NSTokenField *)arg1 writeRepresentedObjects:(NSArray *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (id)tokenField:(NSTokenField *)arg1 representedObjectForEditingString:(NSString *)arg2;
- (NSString *)tokenField:(NSTokenField *)arg1 editingStringForRepresentedObject:(id)arg2;
- (NSString *)tokenField:(NSTokenField *)arg1 displayStringForRepresentedObject:(id)arg2;
- (NSArray *)tokenField:(NSTokenField *)arg1 shouldAddObjects:(NSArray *)arg2 atIndex:(unsigned long long)arg3;
- (NSArray *)tokenField:(NSTokenField *)arg1 completionsForSubstring:(NSString *)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
@end

@protocol NSToolbarDelegate <NSObject>

@optional
- (void)toolbarDidRemoveItem:(NSNotification *)arg1;
- (void)toolbarWillAddItem:(NSNotification *)arg1;
- (NSArray *)toolbarSelectableItemIdentifiers:(NSToolbar *)arg1;
- (NSArray *)toolbarAllowedItemIdentifiers:(NSToolbar *)arg1;
- (NSArray *)toolbarDefaultItemIdentifiers:(NSToolbar *)arg1;
- (NSToolbarItem *)toolbar:(NSToolbar *)arg1 itemForItemIdentifier:(NSString *)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
@end

@protocol NSTouchBarDelegate <NSObject>

@optional
- (NSTouchBarItem *)touchBar:(NSTouchBar *)arg1 makeItemForIdentifier:(NSString *)arg2;
@end

@protocol NSWindowDelegate <NSObject>

@optional
- (void)windowDidChangeOcclusionState:(NSNotification *)arg1;
- (void)windowDidExitVersionBrowser:(NSNotification *)arg1;
- (void)windowWillExitVersionBrowser:(NSNotification *)arg1;
- (void)windowDidEnterVersionBrowser:(NSNotification *)arg1;
- (void)windowWillEnterVersionBrowser:(NSNotification *)arg1;
- (void)windowDidExitFullScreen:(NSNotification *)arg1;
- (void)windowWillExitFullScreen:(NSNotification *)arg1;
- (void)windowDidEnterFullScreen:(NSNotification *)arg1;
- (void)windowWillEnterFullScreen:(NSNotification *)arg1;
- (void)windowDidEndLiveResize:(NSNotification *)arg1;
- (void)windowWillStartLiveResize:(NSNotification *)arg1;
- (void)windowDidEndSheet:(NSNotification *)arg1;
- (void)windowWillBeginSheet:(NSNotification *)arg1;
- (void)windowDidChangeBackingProperties:(NSNotification *)arg1;
- (void)windowDidChangeScreenProfile:(NSNotification *)arg1;
- (void)windowDidChangeScreen:(NSNotification *)arg1;
- (void)windowDidUpdate:(NSNotification *)arg1;
- (void)windowDidDeminiaturize:(NSNotification *)arg1;
- (void)windowDidMiniaturize:(NSNotification *)arg1;
- (void)windowWillMiniaturize:(NSNotification *)arg1;
- (void)windowWillClose:(NSNotification *)arg1;
- (void)windowDidResignMain:(NSNotification *)arg1;
- (void)windowDidBecomeMain:(NSNotification *)arg1;
- (void)windowDidResignKey:(NSNotification *)arg1;
- (void)windowDidBecomeKey:(NSNotification *)arg1;
- (void)windowDidMove:(NSNotification *)arg1;
- (void)windowWillMove:(NSNotification *)arg1;
- (void)windowDidExpose:(NSNotification *)arg1;
- (void)windowDidResize:(NSNotification *)arg1;
- (void)window:(NSWindow *)arg1 didDecodeRestorableState:(NSCoder *)arg2;
- (void)window:(NSWindow *)arg1 willEncodeRestorableState:(NSCoder *)arg2;
- (struct CGSize)window:(NSWindow *)arg1 willResizeForVersionBrowserWithMaxPreferredSize:(struct CGSize)arg2 maxAllowedSize:(struct CGSize)arg3;
- (void)windowDidFailToExitFullScreen:(NSWindow *)arg1;
- (void)window:(NSWindow *)arg1 startCustomAnimationToEnterFullScreenOnScreen:(NSScreen *)arg2 withDuration:(double)arg3;
- (NSArray *)customWindowsToEnterFullScreenForWindow:(NSWindow *)arg1 onScreen:(NSScreen *)arg2;
- (void)window:(NSWindow *)arg1 startCustomAnimationToExitFullScreenWithDuration:(double)arg2;
- (NSArray *)customWindowsToExitFullScreenForWindow:(NSWindow *)arg1;
- (void)windowDidFailToEnterFullScreen:(NSWindow *)arg1;
- (void)window:(NSWindow *)arg1 startCustomAnimationToEnterFullScreenWithDuration:(double)arg2;
- (NSArray *)customWindowsToEnterFullScreenForWindow:(NSWindow *)arg1;
- (unsigned long long)window:(NSWindow *)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2;
- (struct CGSize)window:(NSWindow *)arg1 willUseFullScreenContentSize:(struct CGSize)arg2;
- (BOOL)window:(NSWindow *)arg1 shouldDragDocumentWithEvent:(NSEvent *)arg2 from:(struct CGPoint)arg3 withPasteboard:(NSPasteboard *)arg4;
- (BOOL)window:(NSWindow *)arg1 shouldPopUpDocumentPathMenu:(NSMenu *)arg2;
- (struct CGRect)window:(NSWindow *)arg1 willPositionSheet:(NSWindow *)arg2 usingRect:(struct CGRect)arg3;
- (NSUndoManager *)windowWillReturnUndoManager:(NSWindow *)arg1;
- (BOOL)windowShouldZoom:(NSWindow *)arg1 toFrame:(struct CGRect)arg2;
- (struct CGRect)windowWillUseStandardFrame:(NSWindow *)arg1 defaultFrame:(struct CGRect)arg2;
- (struct CGSize)windowWillResize:(NSWindow *)arg1 toSize:(struct CGSize)arg2;
- (id)windowWillReturnFieldEditor:(NSWindow *)arg1 toObject:(id)arg2;
- (BOOL)windowShouldClose:(id)arg1;
@end

@protocol NSWindowRestoration <NSObject>
+ (void)restoreWindowWithIdentifier:(NSString *)arg1 state:(NSCoder *)arg2 completionHandler:(void (^)(NSWindow *, NSError *))arg3;
@end

@protocol PFTDataViewDelegate <NSObject>

@optional
- (void)stopDisplayingMessageForDataView:(PFTDataView *)arg1;
- (void)dataView:(PFTDataView *)arg1 shouldDisplayMessage:(NSString *)arg2;
@end

@protocol PFTDetailViewAccessory <NSObject>
- (void)setMainView:(NSView *)arg1;
@end

@protocol PFTInstrumentClient <NSObject>
- (void)replaceType:(PFTInstrumentType *)arg1 withType:(PFTInstrumentType *)arg2;
- (void)refreshedInstrumentType:(PFTInstrumentType *)arg1;
- (void)newInstrumentType:(PFTInstrumentType *)arg1;
@end

@protocol PFTScalableView
- (struct CGSize)scale;
- (double)setVerticalPercentage:(double)arg1;
- (double)setHorizontalPercentage:(double)arg1;
@end

@protocol SymbolAwareRun <NSObject>
- (XRBacktraceRepository *)backtraceRepository;
@end

@protocol XRAccessiblePathCellDelegate <NSPathCellDelegate>

@optional
- (NSString *)pathCell:(NSPathCell *)arg1 accessibilityDescriptionForPathComponentCell:(NSPathComponentCell *)arg2 atIndex:(unsigned long long)arg3;
@end

@protocol XRAnalysisCoreCallTreeViewControllerDelegate <NSObject>

@optional
- (void)callTreeViewControllerDidUpdateContext:(XRAnalysisCoreCallTreeViewController *)arg1;
- (void)callTreeViewControllerWillUpdateContext:(XRAnalysisCoreCallTreeViewController *)arg1;
@end

@protocol XRAnalysisCoreDetailViewControllerDelegate <NSObject>

@optional
- (void)detailViewController:(XRAnalysisCoreDetailViewController *)arg1 didUpdateExtendedDetail:(NSArray *)arg2;
@end

@protocol XRAnalysisCoreProjectorFunction <NSObject>
- (id)extendFunctionWithScope:(unsigned long long)arg1;
- (unsigned short)outputEngineeringType;
- (BOOL)isValidForEngineeringType:(unsigned short)arg1;
- (NSString *)displayableFunctionName;
@end

@protocol XRAnalysisCoreQueryHandler <NSObject>
- (void)reduceFromLocalResults:(NSArray *)arg1;
- (void)runWorkgroup:(unsigned short)arg1 of:(unsigned int)arg2 withLocalResults:(NSMutableDictionary *)arg3 context:(id <XRAnalysisCoreQueryContext>)arg4 rowIterator:(struct XRAnalysisCoreReadCursor *)arg5;
@end

@protocol XRAnalysisCoreRollUpFunction <XRAnalysisCoreProjectorFunction>
- (void)rollUp:(const struct XRAnalysisCoreReadCursor *)arg1 to:(id *)arg2 core:(id <XRAnalysisCoreReadOnly>)arg3;

@optional
- (XRAnalysisCoreTableQuery *)queryForRolledUpValue:(XRAnalysisCoreValue *)arg1;
@end

@protocol XRAnalysisCoreSortDescriptor

@optional
- (void)sortDidFinish;
- (void)sortWillBegin;
@end

@protocol XRAnalysisCoreTableViewControllerDelegate <NSObject>

@optional
- (void)tableViewController:(XRAnalysisCoreTableViewController *)arg1 selectedAndEventAtTime:(unsigned long long)arg2;
@end

@protocol XRAnalysisCoreTableViewRow <NSObject>
- (NSAttributedString *)attributedStringValue;
@end

@protocol XRAnalysisCoreValueCellView <NSObject>
- (NSString *)stringValue;
- (NSAttributedString *)attributedStringValue;
@end

@protocol XRAnalysisCoreViewSubcontroller <XRContextContainer, XRFilteredDataSource>
- (void)eventHorizonAdvancedThroughRange:(struct XRTimeRange)arg1;
@end

@protocol XRBrushDataSource <NSObject>
- (unsigned long long)numberOfGraphsForRun:(XRRun *)arg1;
- (NSString *)graphStyleForRun:(XRRun *)arg1;

@optional
- (BOOL)hasBaselineForRun:(XRRun *)arg1;
- (NSString *)run:(XRRun *)arg1 provideBackgroundTextForInspectionTimeStamp:(unsigned long long)arg2;
- (unsigned long long)supportedGraphTypesForRun:(XRRun *)arg1;
- (BOOL)stackGraphsForRun:(XRRun *)arg1;
- (BOOL)run:(XRRun *)arg1 hasImagesForGraphAtIndex:(long long)arg2;
- (void)run:(XRRun *)arg1 userFocusedOnPoint:(struct XRGraphPoint *)arg2 forInspectionTimeStamp:(unsigned long long)arg3;
- (long long)run:(XRRun *)arg1 numberOfLabelsForPoint:(struct XRGraphPoint *)arg2 forInspectionTimeStamp:(unsigned long long)arg3 graphAtIndex:(long long)arg4;
- (void)run:(XRRun *)arg1 provideLabel:(id *)arg2 andLabelPosition:(struct XRGraphPoint *)arg3 forLabelIndex:(long long)arg4 forInspectionTimeStamp:(unsigned long long)arg5 graphAtIndex:(long long)arg6;
- (BOOL)run:(XRRun *)arg1 graphToCurrentTimeForGraphAtIndex:(long long)arg2;
- (NSString *)graphSummaryForRun:(XRRun *)arg1;
- (NSString *)run:(XRRun *)arg1 pathTypeForState:(unsigned long long)arg2 graphAtIndex:(long long)arg3;
- (struct XRPathAttribute)run:(XRRun *)arg1 attributeForState:(unsigned long long)arg2 graphAtIndex:(long long)arg3;
- (unsigned long long)run:(XRRun *)arg1 stateForPoint:(struct XRGraphPoint *)arg2 graphAtIndex:(long long)arg3;
- (id)run:(XRRun *)arg1 graphedDataKeypath:(id *)arg2;
- (NSString *)run:(XRRun *)arg1 labelForPoint:(struct XRGraphPoint *)arg2 graphAtIndex:(long long)arg3;
- (NSString *)run:(XRRun *)arg1 labelForGraphAtIndex:(long long)arg2;
- (NSImage *)run:(XRRun *)arg1 imageForPoint:(struct XRGraphPoint *)arg2 graphAtIndex:(long long)arg3;
- (NSColor *)run:(XRRun *)arg1 colorForPoint:(struct XRGraphPoint *)arg2 graphAtIndex:(long long)arg3;
- (NSColor *)run:(XRRun *)arg1 colorForGraphAtIndex:(long long)arg2;
- (void)run:(XRRun *)arg1 providePoints:(struct XRGraphPoint **)arg2 count:(long long *)arg3 forTimeRange:(struct XRTimeRange)arg4 minimumInterval:(unsigned long long)arg5 graphAtIndex:(long long)arg6;
- (void)run:(XRRun *)arg1 providePoints:(struct XRGraphPoint **)arg2 count:(long long *)arg3 graphSequence:(XRGraphSequence *)arg4 forTimeRange:(struct XRTimeRange)arg5 minimumInterval:(unsigned long long)arg6 graphAtIndex:(long long)arg7;
@end

@protocol XRCPUmanagerDelegateProtocol <NSObject>
- (void)updateActiveProcessorCoreCount;
@end

@protocol XRCallTreeComparable <NSObject>
- (BOOL)prepareCallTreeCompare;
@end

@protocol XRCallTreeDataSource <NSObject>
- (XRBacktraceAggregator *)backtracesForCategory:(NSString *)arg1 timeRange:(struct XRTimeRange)arg2 savedIndex:(unsigned long long *)arg3;

@optional
- (void)resetAggregatesForRepository:(XRBacktraceRepository *)arg1;
- (NSArray *)processCategoriesForPid:(int)arg1;
- (NSArray *)provideCategories;
@end

@protocol XRCommentObserver <NSObject>
- (void)commentsWereUpdated:(NSDictionary *)arg1 displayType:(int)arg2;
@end

@protocol XRContextContainer <NSObject>
- (NSView *)viewForContext:(XRContext *)arg1;
- (NSArray *)siblingsForContext:(XRContext *)arg1;
- (void)displayContext:(XRContext *)arg1;
- (XRContext *)contextRepresentation;

@optional
- (void)clearCurrentDataContext;
- (XRContext *)currentDataContext;
- (id <XRContextContainer>)contextContainerForUUID:(NSString *)arg1;
- (NSString *)uuid;
- (NSImage *)iconForContext:(XRContext *)arg1;
@end

@protocol XRDeviceObserver <NSObject>
- (void)handleDeviceNotification:(XRDevice *)arg1;
@end

@protocol XREditableEntity <NSObject>
- (BOOL)isDirty;
- (void)setIsDirty:(BOOL)arg1;
@end

@protocol XRExportDataProtocol
- (void)exportSelectedRunInFormat:(int)arg1 toPath:(NSString *)arg2;
@end

@protocol XRFilteredDataSource <NSObject>

@optional
- (NSString *)selectedSearchContext;
- (NSArray *)searchContexts;
- (void)filterDetailWithTokens:(NSArray *)arg1 context:(NSString *)arg2 matchesAny:(BOOL)arg3;
@end

@protocol XRImagePickerDelegate
- (void)imagePicker:(XRImagePickerView *)arg1 imageSelectedFromURL:(NSURL *)arg2;
- (void)imagePicker:(XRImagePickerView *)arg1 selectedImageAtIndex:(long long)arg2;
- (NSArray *)imagesForImagePicker:(XRImagePickerView *)arg1;
@end

@protocol XRImportDataProtocol
- (BOOL)importRun:(XRRun *)arg1 fromPaths:(NSArray *)arg2 error:(id *)arg3;
@end

@protocol XRInspectorDelegate <NSObject>
- (void)inspectorDidClose:(XRInspector *)arg1;
@end

@protocol XRInspectorSource <NSObject>
- (NSString *)documentUUID;
- (NSArray *)dataElementsForInspector:(id)arg1;
- (void)inspectorDismissed:(id)arg1;

@optional
- (XRInstrument *)instrument;
- (BOOL)willProvideConfigurationDataElementsForInspector:(id)arg1;
- (NSArray *)configurationDataElementsForInspector:(id)arg1;
@end

@protocol XRInstrumentListItemViewControllerDelegate <NSObject>
- (void)viewControllerDidChangeInstrumentSelection:(XRInstrumentListItemViewController *)arg1;
@end

@protocol XRInstrumentViewController <NSObject, XRSourceCommentScopeProvider>
@property(retain, nonatomic) XRInstrumentStatus *status;
- (id <XRFilteredDataSource>)detailFilteredDataSource;
- (void)restoreDisplayStateFromTemplate:(NSDictionary *)arg1;
- (NSDictionary *)saveDisplayStateForTemplates;
- (NSArray *)currentExtendedDetailMetaUI;
- (NSArray *)currentDisplaySettingsDetailMetaUI;
- (NSArray *)currentRecordSettingsDetailMetaUI;
- (void)instrumentDidChangeSwitches;
- (void)currentBrushBecameStale;
- (void)didRecordDataInTimeRange:(struct XRTimeRange)arg1;
- (void)eventHorizonAdvancedThroughRange:(struct XRTimeRange)arg1;
- (XRCallTreeInformation *)currentCallTreeFilter;
- (void)requestDocumentInspectFlag:(XRTimeFlag *)arg1;
- (BOOL)requestDocumentSetInspectionTime:(unsigned long long)arg1;
- (void)documentDidUpdateBaseFilterForRunNumber:(long long)arg1;
- (void)documentSetInspectionTime:(unsigned long long)arg1;
- (struct XRTimeRange)documentsSelectedTimeRange;
- (void)instrumentChangedTableRequirements;
- (void)instrumentWillBecomeInvalid;
- (id <XRContextContainer>)detailContextContainer;
- (BOOL)resolution:(unsigned long long)arg1 differsFrom:(unsigned long long)arg2 runNumber:(long long)arg3 strategy:(struct NSString *)arg4;
- (void)configureTrackOverlay:(XRTrackOverlay *)arg1;
- (void)configureTrack:(XRTrack *)arg1;
@end

@protocol XRLazyKVOResponder <NSObject>
- (void)handleLazyKVOUpdate:(XRLazyKVOAdapter *)arg1;

@optional
- (void)prepareForLazyKVOUpdate:(XRLazyKVOAdapter *)arg1 object:(id)arg2 keyPath:(NSString *)arg3 context:(const void *)arg4;
@end

@protocol XRPathCellAccessible <NSObject>
- (NSMenu *)trackingMenu;
- (void)handleClickInComponentCell:(NSPathComponentCell *)arg1 atPoint:(struct CGPoint)arg2 inRect:(struct CGRect)arg3 ofView:(NSView *)arg4 event:(NSEvent *)arg5;
@end

@protocol XRProcessTargetedObject <NSObject>
- (int)defaultTargetTypeForChooser;
- (XRDevice *)currentTargetDevice;
- (PFTProcess *)currentTargetProcess;
- (BOOL)supportsTargetType:(int)arg1;
- (void)setTargetsDevice:(XRDevice *)arg1;
- (void)setTargetsLaunchedProcess:(PFTProcess *)arg1;
- (void)setTargetsExistingProcess:(PFTProcess *)arg1;
- (void)setTargetsAllProcesses;
@end

@protocol XRSearchTarget
- (BOOL)searchBackward:(NSString *)arg1;
- (BOOL)searchForward:(NSString *)arg1 skipCurrent:(BOOL)arg2;
- (NSArray *)searchCategories;
@end

@protocol XRSearchTargetHelper
- (NSArray *)backtraceForVisibleRow:(unsigned long long)arg1;
@end

@protocol XRSourceCommentScopeProvider <NSObject>
- (void)refineSourceAnnotationQuery:(XRSourceAnnotationQuery *)arg1;
@end

@protocol XRSupportsPFTWindowController <NSObject>
@property(readonly, nonatomic) PFTWindowController *pftWindowController;
@end

@protocol XRTabViewControllerAnimationControlDelegate <NSObject>
- (void)tabViewControllerFinishedAnimating:(NSTabViewController *)arg1;
- (void)tabViewControllerStartedAnimating:(NSTabViewController *)arg1;
@end

@protocol XRTextViewDragDestination
- (BOOL)performDragOperation:(id <NSDraggingInfo>)arg1;
- (BOOL)prepareForDragOperation:(id <NSDraggingInfo>)arg1;
- (unsigned long long)dragging:(id <NSDraggingInfo>)arg1;
- (NSArray *)dragTypes;
@end

@protocol XRToolbarManager <NSObject, NSToolbarDelegate>
+ (id <XRToolbarManager>)toolbarManagerWithIdentifier:(NSString *)arg1 window:(NSWindow *)arg2 documentIdentifier:(NSString *)arg3;
@property(readonly, nonatomic) NSView *libraryButton;
@end

@protocol XRTopicBrowserViewDelegate <NSObject>
- (void)topicBrowserView:(XRTopicBrowserView *)arg1 filenameDropped:(NSString *)arg2;
@end

@protocol XRTopicInterfaceComponent <NSObject>
- (NSView *)view;
- (void)applyResult:(NSMutableDictionary *)arg1;
- (XRTopic *)subTopic;
- (void)setSubTopic:(XRTopic *)arg1;
- (id)initWithTopic:(XRTopic *)arg1;

@optional
- (int)topicViewer:(id <XRTopicViewer>)arg1 handleKeyDown:(id)arg2;
- (void)reloadData;
- (void)refresh;
@end

@protocol XRTopicViewer
- (void)setSelectedTopic:(XRTopic *)arg1;
- (XRTopic *)selectedTopic;
- (NSArray *)topics;
@end

@protocol XRUIModelChangeObserver
- (void)modelDidChange:(NSNotification *)arg1;
@end

@protocol XRUIStackFrame <NSCoding, NSObject>
- (long long)lineNumberForDisplay;
- (NSString *)pathForDisplay;
- (NSString *)symbolNameForUse;
- (NSString *)symbolNameForDisplay;
- (NSString *)libraryForDisplay;

@optional
- (BOOL)getWeight:(double *)arg1 at:(unsigned long long)arg2;
@end

@protocol __ARCLiteIndexedSubscripting__
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@end

@protocol __ARCLiteKeyedSubscripting__
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@end

@interface PFTDetailTypeHostView : NSView <NSTokenFieldDelegate>
{
    NSTextField *_searchField;
    NSView *_contentView;
    XRSearchBarViewController *_findViewController;
    PFTSelectedInstrumentList *_model;
    BOOL _scrollViewRequired;
    BOOL _ignoreSubviewRemove;
    NSMapTable *_accessoryViewsByInstrumentByKey;
    NSMapTable *_shownAccessoryViewsByInstrument;
}

- (void).cxx_destruct;
- (void)willRemoveSubview:(id)arg1;
- (void)hideAccessoryViewWithKey:(id)arg1;
- (void)_hideView:(id)arg1 removeFromSuperview:(BOOL)arg2;
- (id)showAccessoryViewWithKey:(id)arg1;
- (void)addAccessoryView:(id)arg1 withKey:(id)arg2 forInstrument:(id)arg3;
- (void)addAccessoryView:(id)arg1 withKey:(id)arg2 forInstrument:(id)arg3 asHidden:(BOOL)arg4;
- (id)_accessoryViewWithKey:(id)arg1;
- (id)_shownAccessoryViews;
- (void)_removeAccessoryViewsForInstrument:(id)arg1;
- (id)_instrument;
- (void)targetForFindHasChanged;
- (void)_instrumentChangedSearchView:(id)arg1;
- (void)findPanelAction:(id)arg1;
- (void)setModel:(id)arg1;
- (id)model;
- (id)targetView;
- (id)_innerTargetView;
- (id)tokenField:(id)arg1 shouldUseDrawingAttributes:(id)arg2 forRepresentedObject:(id)arg3;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (BOOL)isOpaque;
- (void)layout;
- (void)viewDidMoveToWindow;
- (void)updateInstrument:(id)arg1 withDetailView:(id)arg2;
- (void)updateDetailViewWithInstrument:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


#endif /* InstrumentsKit_Protocal_h */
