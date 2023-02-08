// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "ComScore",
    products: [
        .library(
            name: "ComScore",
            targets: ["ComScore"])
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        .binaryTarget(
            name: "ComScore",
            path: "ComScore/dynamic/ComScore.xcframework"
        )
    ]
)

