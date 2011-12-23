/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class NSMutableArray, UITableView;

@interface CertInfoCertificateDetailsView : UIView <UITableViewDataSource> {
    UITableView *_tableView;
    NSMutableArray *_tableSections;
}


- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)_detailForIndexPath:(id)arg1;
- (id)_titleForIndexPath:(id)arg1;
- (id)_sectionsFromProperties:(id)arg1;
- (id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2;
- (id)_cellInfosForSection:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 certificateProperties:(id)arg2;
- (void)appendInfoFromCertView:(id)arg1;

@end
