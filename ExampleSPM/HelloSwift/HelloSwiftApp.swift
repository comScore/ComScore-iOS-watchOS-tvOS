import SwiftUI
import ComScore

@main
struct HelloSwiftApp: App {
    var body: some Scene {
        WindowGroup {
            ContentView()
                .onAppear {
                    startComScore()
                }
        }
    }

    func startComScore() {
        let config = SCORPublisherConfiguration { builder in
            builder?.publisherId = "1000001"
        }
        SCORAnalytics.configuration().addClient(with: config)
        SCORAnalytics.start()
    }
}

