/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSEditableListController : PSListController  {
    BOOL _editable;
}


- (void)setEditingButtonHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)editDoneTapped;
- (id)_editButtonBarItem;
- (BOOL)_showEditButtonUponAppearing;
- (void)_setEditable:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)performDeletionActionForSpecifier:(id)arg1;
- (BOOL)editable;
- (void)setEditable:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)suspend;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)_updateNavigationBar;
- (id)init;
- (void)didLock;
- (void)pushController:(id)arg1;

@end
