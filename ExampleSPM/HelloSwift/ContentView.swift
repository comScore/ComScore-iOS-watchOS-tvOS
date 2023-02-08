//
//  ContentView.swift
//  HelloSwift
//
//  Created by Jozsef Marton Kerekes on 8/2/23.
//  Copyright © 2023 comScore. All rights reserved.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
        VStack {
            Image(systemName: "globe")
                .imageScale(.large)
                .foregroundColor(.accentColor)
            Text("Hello, world!")
        }
        .padding()
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
