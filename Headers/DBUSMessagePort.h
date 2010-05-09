/* -*-objc-*-
  Distributed objects bridge for D-Bus
  Copyright (C) 2007 Free Software Foundation, Inc.

  Written by: Ricardo Correa <r.correa.r@gmail.com>
  Created: August 2008

  This file is part of the GNUstep Base Library.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Library General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Library General Public License for more details.

  You should have received a copy of the GNU Library General Public
  License along with this library; if not, write to the Free
  Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA.

   <title>DBUSMessagePort class reference</title>
*/

#ifndef _DBUSMessagePort_H_
#define _DBUSMessagePort_H_

#import <Foundation/NSPort.h>

@class NSDate;
@class NSMutableArray;
@class NSPort;

@interface DBUSMessagePort : NSMessagePort

- (BOOL) sendBeforeDate: (NSDate *)when
             components: (NSMutableArray *)components
                   from: (NSPort *)receivingPort
               reserved: (unsigned)length;

- (BOOL) sendBeforeDate: (NSDate *)when
                  msgid: (int)msgid
             components: (NSMutableArray *)components
                   from: (NSPort*)receivingPort
               reserved: (unsigned)length;

@end

#endif // _DBUSMessagePort_H_
