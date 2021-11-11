// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "ComScore",
    platforms: [
        .iOS(.v9),
        .tvOS(.v9)
    ],
    products: [
        .library(
            name: "ComScore",
            targets: ["ComScoreDynamic"]),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "ComScoreDynamic",
            path: "ComScore/dynamic/ComScore.xcframework"),
    ]
)
