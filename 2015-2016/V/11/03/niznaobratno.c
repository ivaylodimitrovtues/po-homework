+#include <stdio.h>
+#include <string.h>
+void main()
+{
+    int i,l;
+    char s[80];
+    scanf("%s",&s);
+        l=strlen(s);
+        do{
+            printf("%c",s[l]);
+            l--;
+        }while(l>=0);
+}
