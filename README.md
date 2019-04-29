## RN cli usage in a mono-repo

```
cd apps/app2
yarn start:ios
```

In node_modules/@react-native-community/cli/build/tools/config/index.js

replace L96

```
const root = _path().default.join(userConfig.root || projectRoot, 'node_modules', dependencyName);
```

replace L170

```
root: userConfig.root || projectRoot,
```
