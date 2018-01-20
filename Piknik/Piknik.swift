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
        let config = """
        Connect   = \"192.168.1.221:8075\"    # Edit appropriately \
        Psk       = \"0160d74470b65c3f870c1784cf7917b4ab7e5e336060508cd1ac5d4fa538b0ba\"
        SignPk    = \"b4189aae54a85eb4ae4377a8647586354cda29074ec084d7b0ce0d7f0837856f\"
        SignSk    = \"6483636e7f5ae989dbd2c03dded4713eeb3a0bb2cb460c1a2da6f5300b5ba42d\"
        EncryptSk = \"a4ea7ebe0e46d6b61a08ee05c033c0aa5281d924c938d09060d31c09c41fcb82\"
        """
        
        if let configUrl = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first?.appendingPathComponent(file) {
            try? config.write(to: configUrl, atomically: false, encoding: .utf8)
        }
        
        UIPasteboard.general.string = "testing"
        CoreCopy()
//        print("clip: \(CorePaste())")
    }
}
