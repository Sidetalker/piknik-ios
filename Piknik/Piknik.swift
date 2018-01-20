//
//  Piknik.swift
//  Piknik
//
//  Created by Kevin Sullivan on 1/19/18.
//  Copyright © 2018 Sideapps. All rights reserved.
//

import UIKit
import Core

class Piknik {
    static func test() {
        let file = ".piknik.toml"
//        let config = """
//        Connect   = \"127.0.0.1:8075\"    # Edit appropriately \
//        Psk       = \"0160d74470b65c3f870c1784cf7917b4ab7e5e336060508cd1ac5d4fa538b0ba\"
//        SignPk    = \"b4189aae54a85eb4ae4377a8647586354cda29074ec084d7b0ce0d7f0837856f\"
//        SignSk    = \"6483636e7f5ae989dbd2c03dded4713eeb3a0bb2cb460c1a2da6f5300b5ba42d\"
//        EncryptSk = \"a4ea7ebe0e46d6b61a08ee05c033c0aa5281d924c938d09060d31c09c41fcb82\"
//        """
        let config = """
        Connect   = "94.23.199.27:8075"
        Psk       = "29e72ddf1b019fd13d8285c57fe266e4595af1ba284e5ccf8da5fb64e932ef64"
        SignPk    = "a467f8c866fb82d75ed232edfafb880db260163975ef092ba3246f4e4121d52a"
        SignSk    = "fdb48682f83ec502233b225c907fe8896c93a15260cf01a348d0bb9b4ea80942"
        EncryptSk = "af4bb6e42eb61ad95a6bb2bb99f89d6b0dba20dfcb15d4f9a9bdbee7ee115fbb"
        """
        
        if let configUrl = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first?.appendingPathComponent(file) {
            try? config.write(to: configUrl, atomically: false, encoding: .utf8)
        }
        
        UIPasteboard.general.string = "testing"
        CoreCopy("ios-test")
//        print("clip: \(CorePaste())")
    }
}
