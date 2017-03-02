//
//  PFTTraceDocument.m
//  MacDemo
//
//  Created by szzc on 2016/11/28.
//  Copyright © 2016年 szzc. All rights reserved.
//

#import "PFTTraceDocument.h"

@implementation PFTTraceDocument_test
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3
{
    
    return YES;
}

#if 0
char -[PFTTraceDocument readFromURL:ofType:error:](void * self, void * _cmd, void * arg2, void * arg3, void * * arg4) {
    r8 = arg4;
    var_48 = r8;
    r12 = self;
    var_38 = [arg2 retain];
    rbx = [arg3 retain];
    r15 = *_OBJC_IVAR_$_PFTTraceDocument._originalURL;
    if (*(r12 + r15) == 0x0) {
        r14 = @selector(isEqual:);
        if (_objc_msgSend(rbx, r14) != 0x0) {
            r15 = *_OBJC_IVAR_$_PFTTraceDocument._originalURL;
            var_40 = rbx;
            rax = PFTNewTraceDocumentURL(var_48);
            rax = [rax retain];
            rdi = *(r12 + r15);
            *(r12 + r15) = rax;
            [rdi release];
            if (*(r12 + r15) != 0x0) {
                r12->_createdViaTemplate = 0x1;
                [r12 setFileType:@"Trace Document"];
                [r12 setFileURL:0x0];
                rdi = r12->_trace;
                rcx = *(r12 + r15);
                rdx = var_38;
                r15 = [rdi loadTemplate:rdx outputURL:rcx preserveRunHistory:0x0 error:_objc_msgSend];
                r13 = [[r12->_trace instrumentCommand] retain];
                r14 = [[r13 defaultExecProcess] retain];
                if (r14 != 0x0) {
                    rdx = r14;
                    [r12 setDefaultProcess:rdx];
                }
                [r12->_trace release];
                [r12 release];
                [r14 release];
                [r13 release];
            }
            else {
                r15 = 0x0;
            }
        }
        else {
            rdx = @"Trace Document";
            rsi = r14;
            if (_objc_msgSend(rbx, rsi) != 0x0) {
                var_40 = rbx;
                rbx = [var_38 retain];
                rdi = *(r12 + r15);
                *(r12 + r15) = rbx;
                [rdi release];
                r14 = *_OBJC_IVAR_$_PFTTraceDocument._trace;
                rdi = *(r12 + r14);
                rcx = 0x0;
                rdx = rbx;
                r15 = [rdi loadDocument:rdx error:rcx];
                rbx = [0x0 retain];
                
                
                if (r15 != 0x0) {
                    var_48 = _objc_msgSend;
                    rdi = *(r12 + r14);
                    rbx = _objc_msgSend;
                    r14 = [[rdi instrumentCommand] retain];
                    /*
                     rdi=XRTrace 
                     r14=PFTInstrumentCommand @"Instrument Command (purpose:Idle; output destination:file:///.file/id=6571367.2984298/)"
                     */
                    r13 = [[r14 defaultExecProcess] retain];
                    /*
                     r14=PFTInstrumentCommand
                     r13=< PFTProcess 0x108a3e210 : 神州专车 > {
                     executable: /private/var/containers/Bundle/Application/02023F07-4919-4DB7-82E6-122E2152DB71/UCar.app
                     device: < XRMobileDevice 0x1120a51a0 : DaShaIphone (10.1.1) (5eb2e90e95187f1648df623576e0de2ac221fd11) >
                     args: (
                     )
                     environment: {
                     }
                     }
                     */
                    
                    if (r13 != 0x0) {
                        rdx = 0x1;
                        r8 = 0x0;
                        rcx = r13;
                        [r12 _setTargetType:rdx withProcess:rcx device:r8 preserve:0x0];
                        /*
                         [PFTTraceDocument _setTargetType:1 withProcess:PFTProcess device:nil preserve:0x0];
                         */
                    }
                    (rbx)(r12->_trace, @selector(awakeFromTemplate), rdx, rcx, r8);
                    (rbx)(r12, @selector(_traceDidAwake), rdx, rcx, r8);
                    [r13 release];
                    [r14 release];
                    rbx = var_48;
                }
                else {
                    r14 = var_48;
                    if (r14 != 0x0) {
                        [r12 close];
                        *r14 = objc_retainAutorelease(rbx);
                    }
                }
                [rbx release];
                
                
                
            }
            else {
                var_40 = rbx;
                rbx = var_48;
                if (rbx != 0x0) {
                    r15 = 0x0;
                    *rbx = [[[NSError errorWithDomain:@"com.apple.PerformanceTools" code:0xffffffffffffffff userInfo:0x0] retain] autorelease];
                }
                else {
                    r15 = 0x0;
                }
            }
        }
        [var_40 release];
        [var_38 release];
        rax = sign_extend_64(r15);
    }
    else {
        rax = __assert_rtn("-[PFTTraceDocument readFromURL:ofType:error:]", "/Library/Caches/com.apple.xbs/Sources/Instruments/Instruments-61529/PFTTraceDocument.m", 0x29a, "_originalURL == nil");
    }
    return rax;
}

#endif

@end
