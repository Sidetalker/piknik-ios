//
//  ViewController.swift
//  Piknik
//
//  Created by Kevin Sullivan on 1/19/18.
//  Copyright © 2018 Sideapps. All rights reserved.
//

import UIKit
import SwiftSocket

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        let client = TCPClient(address: "127.0.0.1", port: 8075)
        print("Connecting to 127.0.0.1")
        switch client.connect(timeout: 1) {
        case .success:
            print("Connected successfully, sending test string")
            switch client.send(string: "test" ) {
            case .success:
                print("String sent successfully!")
            case .failure(let error):
                print("Failed to send string: \(error)")
            }
        case .failure(let error):
            print("Failed to connect: \(error)")
        }
        
        client.close()
        print("Closed connection - running piknik")
        
        Piknik.test()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

