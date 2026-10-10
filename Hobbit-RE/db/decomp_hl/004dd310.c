
void FUN_004dd310(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  puVar2 = &uStack_58;
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)FUN_004e2160(auStack_6c,iVar3,1);
    puVar2[-2] = *puVar1;
    puVar2[-1] = puVar1[1];
    *puVar2 = puVar1[2];
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 3;
  } while (iVar3 < 8);
  FUN_0066c3a0(5,4);
  FUN_0066ddd0(0x2000ff00);
  FUN_0066de80(auStack_60);
  FUN_0066de80(auStack_54);
  FUN_0066de80(auStack_3c);
  FUN_0066de80(auStack_48);
  FUN_0066de80(auStack_30);
  FUN_0066de80(auStack_18);
  FUN_0066de80(auStack_c);
  FUN_0066de80(auStack_24);
  FUN_0066de80(auStack_60);
  FUN_0066de80(auStack_48);
  FUN_0066de80(auStack_18);
  FUN_0066de80(auStack_30);
  FUN_0066de80(auStack_54);
  FUN_0066de80(auStack_24);
  FUN_0066de80(auStack_c);
  FUN_0066de80(auStack_3c);
  FUN_0066de80(auStack_48);
  FUN_0066de80(auStack_3c);
  FUN_0066de80(auStack_c);
  FUN_0066de80(auStack_18);
  FUN_0066de80(auStack_60);
  FUN_0066de80(auStack_30);
  FUN_0066de80(auStack_24);
  FUN_0066de80(auStack_54);
  FUN_0066d9a0();
  return;
}

