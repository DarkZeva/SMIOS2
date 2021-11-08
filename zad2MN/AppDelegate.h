//
//  AppDelegate.h
//  zad2MN
//
//  Created by student on 08/11/2021.
//  Copyright © 2021 aplikacja. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

