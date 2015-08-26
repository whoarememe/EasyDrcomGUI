/**
 * Copyright (C) 2015 Shindo
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "DrcomDealer.h"

#import <memory>
class drcom_dealer_u62;
class eap_dealer;

@interface DrcomDealerU62 : DrcomDealer
{
    std::shared_ptr<drcom_dealer_u62> udp;
    std::shared_ptr<eap_dealer> eap;
}
- (id) initWithNICName: (NSString*)_nicName userName:(NSString *)_userName passWord:(NSString *)_passWord IPAddress:(NSString*)_ip MacAddress:(NSString*)_mac;

- (BOOL) isEAPObjectInit;
- (BOOL) isUDPObjectInit;

// EAP
- (NSInteger) logOff;
- (NSInteger) start;
- (NSInteger) responseIdentity;
- (NSInteger) responseMD5Challenge;

// UDP
- (NSInteger) sendAlivePacket1;
- (NSInteger) sendAlivePacket2;

// Operations
- (NSString*) getNotification;
@end
