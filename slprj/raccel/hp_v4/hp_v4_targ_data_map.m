    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 34;
            section.data(34)  = dumData; %prealloc

                    ;% rtP.P
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.tf
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.MotorAngles_Time0
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.MotorAngles_Data0
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 40003;

                    ;% rtP.uDLookupTable_tableData
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 280009;

                    ;% rtP.uDLookupTable_bp01Data
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 320010;

                    ;% rtP.uDLookupTable1_tableData
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 360011;

                    ;% rtP.uDLookupTable1_bp01Data
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 400012;

                    ;% rtP.uDLookupTable2_tableData
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 440013;

                    ;% rtP.uDLookupTable2_bp01Data
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 480014;

                    ;% rtP.uDLookupTable3_tableData
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 520015;

                    ;% rtP.uDLookupTable3_bp01Data
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 560016;

                    ;% rtP.uDLookupTable4_tableData
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 600017;

                    ;% rtP.uDLookupTable4_bp01Data
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 640018;

                    ;% rtP.uDLookupTable5_tableData
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 680019;

                    ;% rtP.uDLookupTable5_bp01Data
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 720020;

                    ;% rtP.Differentiator_A
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 760021;

                    ;% rtP.Differentiator_C
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 760022;

                    ;% rtP.Differentiator_D
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 760023;

                    ;% rtP.Differentiator_A_opdpomj0oy
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 760024;

                    ;% rtP.Differentiator_C_nlo0afvsm0
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 760025;

                    ;% rtP.Differentiator_D_ilujgvwoqy
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 760026;

                    ;% rtP.Differentiator_A_ny15flnyyl
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 760027;

                    ;% rtP.Differentiator_C_dih140nhs2
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 760028;

                    ;% rtP.Differentiator_D_akfaxsdhsp
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 760029;

                    ;% rtP.Differentiator_A_ngyitj1gem
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 760030;

                    ;% rtP.Differentiator_C_mvzrzdbpid
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 760031;

                    ;% rtP.Differentiator_D_lmu5sgqwp5
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 760032;

                    ;% rtP.Differentiator_A_ks03awdndf
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 760033;

                    ;% rtP.Differentiator_C_htp4rrhqlx
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 760034;

                    ;% rtP.Differentiator_D_id3tz2qugi
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 760035;

                    ;% rtP.Differentiator_A_nkg2t2gpet
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 760036;

                    ;% rtP.Differentiator_C_ofqvx1s2jg
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 760037;

                    ;% rtP.Differentiator_D_dhqehaoneg
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 760038;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 18;
            section.data(18)  = dumData; %prealloc

                    ;% rtP.uDLookupTable_maxIndex
                    section.data(1).logicalSrcIdx = 34;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.uDLookupTable_dimSizes
                    section.data(2).logicalSrcIdx = 35;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.uDLookupTable_numYWorkElts
                    section.data(3).logicalSrcIdx = 36;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.uDLookupTable1_maxIndex
                    section.data(4).logicalSrcIdx = 37;
                    section.data(4).dtTransOffset = 4;

                    ;% rtP.uDLookupTable1_dimSizes
                    section.data(5).logicalSrcIdx = 38;
                    section.data(5).dtTransOffset = 5;

                    ;% rtP.uDLookupTable1_numYWorkElts
                    section.data(6).logicalSrcIdx = 39;
                    section.data(6).dtTransOffset = 6;

                    ;% rtP.uDLookupTable2_maxIndex
                    section.data(7).logicalSrcIdx = 40;
                    section.data(7).dtTransOffset = 8;

                    ;% rtP.uDLookupTable2_dimSizes
                    section.data(8).logicalSrcIdx = 41;
                    section.data(8).dtTransOffset = 9;

                    ;% rtP.uDLookupTable2_numYWorkElts
                    section.data(9).logicalSrcIdx = 42;
                    section.data(9).dtTransOffset = 10;

                    ;% rtP.uDLookupTable3_maxIndex
                    section.data(10).logicalSrcIdx = 43;
                    section.data(10).dtTransOffset = 12;

                    ;% rtP.uDLookupTable3_dimSizes
                    section.data(11).logicalSrcIdx = 44;
                    section.data(11).dtTransOffset = 13;

                    ;% rtP.uDLookupTable3_numYWorkElts
                    section.data(12).logicalSrcIdx = 45;
                    section.data(12).dtTransOffset = 14;

                    ;% rtP.uDLookupTable4_maxIndex
                    section.data(13).logicalSrcIdx = 46;
                    section.data(13).dtTransOffset = 16;

                    ;% rtP.uDLookupTable4_dimSizes
                    section.data(14).logicalSrcIdx = 47;
                    section.data(14).dtTransOffset = 17;

                    ;% rtP.uDLookupTable4_numYWorkElts
                    section.data(15).logicalSrcIdx = 48;
                    section.data(15).dtTransOffset = 18;

                    ;% rtP.uDLookupTable5_maxIndex
                    section.data(16).logicalSrcIdx = 49;
                    section.data(16).dtTransOffset = 20;

                    ;% rtP.uDLookupTable5_dimSizes
                    section.data(17).logicalSrcIdx = 50;
                    section.data(17).dtTransOffset = 21;

                    ;% rtP.uDLookupTable5_numYWorkElts
                    section.data(18).logicalSrcIdx = 51;
                    section.data(18).dtTransOffset = 22;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 35;
            section.data(35)  = dumData; %prealloc

                    ;% rtB.hhzq3ogi50
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.gn1n1fxih5
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.ba3ozliipq
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 7;

                    ;% rtB.h4hnjuf4ok
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 68;

                    ;% rtB.gpwpvx52su
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 183;

                    ;% rtB.dp5bxc123k
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 184;

                    ;% rtB.dscxlqeplg
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 185;

                    ;% rtB.i5bhabdhl2
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 186;

                    ;% rtB.ovgjo1k5mz
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 187;

                    ;% rtB.j3zzcipv1r
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 191;

                    ;% rtB.fayoqg13fo
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 192;

                    ;% rtB.adsurmfp2a
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 193;

                    ;% rtB.pubnjkrbwr
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 194;

                    ;% rtB.mtn15vznzx
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 195;

                    ;% rtB.fihfkiqrmx
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 199;

                    ;% rtB.l1jg00snd3
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 200;

                    ;% rtB.buortkjwm2
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 201;

                    ;% rtB.b30ue11hhm
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 202;

                    ;% rtB.pkw51cykqx
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 203;

                    ;% rtB.orf45wfkfm
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 207;

                    ;% rtB.ptoa4qnrig
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 208;

                    ;% rtB.ckmycfifmz
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 209;

                    ;% rtB.c5pwxc5wo5
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 210;

                    ;% rtB.nyu1nqmmee
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 211;

                    ;% rtB.ox5zppqi1h
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 215;

                    ;% rtB.fws3etbeh2
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 216;

                    ;% rtB.d2o1c2v3x2
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 217;

                    ;% rtB.lartlnyq5x
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 218;

                    ;% rtB.hjqo1tqvvs
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 219;

                    ;% rtB.piuvoczjcx
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 223;

                    ;% rtB.payh5vdrtp
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 224;

                    ;% rtB.n5qbqiye51
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 225;

                    ;% rtB.d5hwduhu53
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 226;

                    ;% rtB.pj4l423n1b
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 227;

                    ;% rtB.mllhy1xoml
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 231;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 7;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 54;
            section.data(54)  = dumData; %prealloc

                    ;% rtDW.dhwnkpcnxt
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.hdt2cnju50
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.iiko3sw2xx
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.denmfeoj33
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.dqyjqqu5qg
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.oiygwdxnsf
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.ogx3yrgm3u
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.b021cdni5x
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.joh1nzqmvf
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.ixypknoxn3
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.ivnrdooirg
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.o3oqp2eeb5
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.fu0do4t3as
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.majfgt41ui
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.pz5d0moowf
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.obcozvopvv
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.ikqokrktqt
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.p3apf3xypr
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 40017;

                    ;% rtDW.h1tshsgvlr
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 80018;

                    ;% rtDW.gz313zzwv0
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 80019;

                    ;% rtDW.exnfkomltd
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 80020;

                    ;% rtDW.ba1o4znci0
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 80021;

                    ;% rtDW.ksxmibc2fy
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 80022;

                    ;% rtDW.mc1j2ro0sq
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 120023;

                    ;% rtDW.ixdsgzcw4h
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 160024;

                    ;% rtDW.lx0xtcqd2q
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 160025;

                    ;% rtDW.ipeo2lwiiv
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 160026;

                    ;% rtDW.o3qizeoydg
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 160027;

                    ;% rtDW.mwdjyjhmsi
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 160028;

                    ;% rtDW.bdtltpway1
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 200029;

                    ;% rtDW.jjqxg4jfpn
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 240030;

                    ;% rtDW.l1qqxacxgl
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 240031;

                    ;% rtDW.jzblxaem0z
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 240032;

                    ;% rtDW.e2rz24nt3a
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 240033;

                    ;% rtDW.m0aqu4oy1c
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 240034;

                    ;% rtDW.fy35y14duc
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 280035;

                    ;% rtDW.dpggk1ar0d
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 320036;

                    ;% rtDW.dw2eh4vk53
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 320037;

                    ;% rtDW.gvnceosiwa
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 320038;

                    ;% rtDW.mlyws0ulw1
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 320039;

                    ;% rtDW.aapx2mrkrz
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 320040;

                    ;% rtDW.opiw53bhx4
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 360041;

                    ;% rtDW.o20gezqes2
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 400042;

                    ;% rtDW.ifwz1fktid
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 400043;

                    ;% rtDW.ejgjdw1cxq
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 400044;

                    ;% rtDW.gemftv1sxb
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 400045;

                    ;% rtDW.fuya4qod4r
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 400046;

                    ;% rtDW.f4r5toieaz
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 440047;

                    ;% rtDW.luyus4t4io
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 480048;

                    ;% rtDW.b2synjeilb
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 480049;

                    ;% rtDW.pbzaaqmd2w
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 480050;

                    ;% rtDW.dukinnnx0c
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 480051;

                    ;% rtDW.iflczmob3f
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 480052;

                    ;% rtDW.cdhabo5zsb
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 480053;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 44;
            section.data(44)  = dumData; %prealloc

                    ;% rtDW.cvejppxdpv.TimePtr
                    section.data(1).logicalSrcIdx = 54;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.inkr1e5adu
                    section.data(2).logicalSrcIdx = 55;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.bqog2u2pjc
                    section.data(3).logicalSrcIdx = 56;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.n0ljlet1z3
                    section.data(4).logicalSrcIdx = 57;
                    section.data(4).dtTransOffset = 8;

                    ;% rtDW.hcyxs4w4z1
                    section.data(5).logicalSrcIdx = 58;
                    section.data(5).dtTransOffset = 17;

                    ;% rtDW.na3foxxgyq
                    section.data(6).logicalSrcIdx = 59;
                    section.data(6).dtTransOffset = 18;

                    ;% rtDW.encdw23bwv
                    section.data(7).logicalSrcIdx = 60;
                    section.data(7).dtTransOffset = 24;

                    ;% rtDW.fbacpiic1n
                    section.data(8).logicalSrcIdx = 61;
                    section.data(8).dtTransOffset = 33;

                    ;% rtDW.cr3v5nlzet
                    section.data(9).logicalSrcIdx = 62;
                    section.data(9).dtTransOffset = 34;

                    ;% rtDW.dk0oub0bmr
                    section.data(10).logicalSrcIdx = 63;
                    section.data(10).dtTransOffset = 40;

                    ;% rtDW.ble400lud2
                    section.data(11).logicalSrcIdx = 64;
                    section.data(11).dtTransOffset = 49;

                    ;% rtDW.fpf3xnlo1i
                    section.data(12).logicalSrcIdx = 65;
                    section.data(12).dtTransOffset = 50;

                    ;% rtDW.cqsk2n0hyd
                    section.data(13).logicalSrcIdx = 66;
                    section.data(13).dtTransOffset = 56;

                    ;% rtDW.fksomzwttx
                    section.data(14).logicalSrcIdx = 67;
                    section.data(14).dtTransOffset = 65;

                    ;% rtDW.dw2xvocr35
                    section.data(15).logicalSrcIdx = 68;
                    section.data(15).dtTransOffset = 66;

                    ;% rtDW.atdas2blb1
                    section.data(16).logicalSrcIdx = 69;
                    section.data(16).dtTransOffset = 72;

                    ;% rtDW.ivgyezlk4b
                    section.data(17).logicalSrcIdx = 70;
                    section.data(17).dtTransOffset = 81;

                    ;% rtDW.p0yqk3t1ml
                    section.data(18).logicalSrcIdx = 71;
                    section.data(18).dtTransOffset = 82;

                    ;% rtDW.fk0tbksf1y
                    section.data(19).logicalSrcIdx = 72;
                    section.data(19).dtTransOffset = 88;

                    ;% rtDW.jlclbgcbdb.LoggedData
                    section.data(20).logicalSrcIdx = 73;
                    section.data(20).dtTransOffset = 97;

                    ;% rtDW.fzn2dadk4e
                    section.data(21).logicalSrcIdx = 74;
                    section.data(21).dtTransOffset = 98;

                    ;% rtDW.gj141fpmf0
                    section.data(22).logicalSrcIdx = 75;
                    section.data(22).dtTransOffset = 99;

                    ;% rtDW.iaunsf4jhe
                    section.data(23).logicalSrcIdx = 76;
                    section.data(23).dtTransOffset = 100;

                    ;% rtDW.njnbn2auk0
                    section.data(24).logicalSrcIdx = 77;
                    section.data(24).dtTransOffset = 101;

                    ;% rtDW.i4vh1y54up
                    section.data(25).logicalSrcIdx = 78;
                    section.data(25).dtTransOffset = 102;

                    ;% rtDW.kks2bzqouh
                    section.data(26).logicalSrcIdx = 79;
                    section.data(26).dtTransOffset = 103;

                    ;% rtDW.ilo32t4j3n
                    section.data(27).logicalSrcIdx = 80;
                    section.data(27).dtTransOffset = 104;

                    ;% rtDW.ioe5pmekjs
                    section.data(28).logicalSrcIdx = 81;
                    section.data(28).dtTransOffset = 105;

                    ;% rtDW.nfjplay2v2
                    section.data(29).logicalSrcIdx = 82;
                    section.data(29).dtTransOffset = 106;

                    ;% rtDW.ppbghzatxg
                    section.data(30).logicalSrcIdx = 83;
                    section.data(30).dtTransOffset = 107;

                    ;% rtDW.dywywnpwvp
                    section.data(31).logicalSrcIdx = 84;
                    section.data(31).dtTransOffset = 108;

                    ;% rtDW.dxe20odrog
                    section.data(32).logicalSrcIdx = 85;
                    section.data(32).dtTransOffset = 109;

                    ;% rtDW.eunmtunrhm
                    section.data(33).logicalSrcIdx = 86;
                    section.data(33).dtTransOffset = 110;

                    ;% rtDW.nkmxjtnacf
                    section.data(34).logicalSrcIdx = 87;
                    section.data(34).dtTransOffset = 111;

                    ;% rtDW.aq4d2zjxa1
                    section.data(35).logicalSrcIdx = 88;
                    section.data(35).dtTransOffset = 112;

                    ;% rtDW.jchrmxk4qx.AQHandles
                    section.data(36).logicalSrcIdx = 89;
                    section.data(36).dtTransOffset = 113;

                    ;% rtDW.j50uiyayzn.LoggedData
                    section.data(37).logicalSrcIdx = 90;
                    section.data(37).dtTransOffset = 114;

                    ;% rtDW.lfqvzabtco.LoggedData
                    section.data(38).logicalSrcIdx = 91;
                    section.data(38).dtTransOffset = 117;

                    ;% rtDW.i4o5kapmqk.AQHandles
                    section.data(39).logicalSrcIdx = 92;
                    section.data(39).dtTransOffset = 118;

                    ;% rtDW.msszk5pvfk
                    section.data(40).logicalSrcIdx = 93;
                    section.data(40).dtTransOffset = 119;

                    ;% rtDW.cjbu3tctay
                    section.data(41).logicalSrcIdx = 94;
                    section.data(41).dtTransOffset = 120;

                    ;% rtDW.loonxv2vam
                    section.data(42).logicalSrcIdx = 95;
                    section.data(42).dtTransOffset = 121;

                    ;% rtDW.ihlaycufuy.AQHandles
                    section.data(43).logicalSrcIdx = 96;
                    section.data(43).dtTransOffset = 122;

                    ;% rtDW.ihlaycufuy3.AQHandles
                    section.data(44).logicalSrcIdx = 97;
                    section.data(44).dtTransOffset = 123;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.m2oxmlar1f
                    section.data(1).logicalSrcIdx = 98;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.hgx5cayjie
                    section.data(1).logicalSrcIdx = 99;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.k4hpgnvelg
                    section.data(2).logicalSrcIdx = 100;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.odyd01dqxa
                    section.data(3).logicalSrcIdx = 101;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.frc3nwwngy
                    section.data(4).logicalSrcIdx = 102;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.p4lw0xvjkj
                    section.data(5).logicalSrcIdx = 103;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.mjohstu43y
                    section.data(6).logicalSrcIdx = 104;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.fs5pe54qqo.PrevIndex
                    section.data(1).logicalSrcIdx = 105;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.lh1550hwj0
                    section.data(2).logicalSrcIdx = 106;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.kl2nhb3awd
                    section.data(3).logicalSrcIdx = 107;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.etecsxhwe2
                    section.data(4).logicalSrcIdx = 108;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% rtDW.cssxtmycgo
                    section.data(1).logicalSrcIdx = 109;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.hesh10yaxb
                    section.data(2).logicalSrcIdx = 110;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.pio0zawnt1
                    section.data(3).logicalSrcIdx = 111;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.nnel3hccnf
                    section.data(4).logicalSrcIdx = 112;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.eq31iilrw4
                    section.data(5).logicalSrcIdx = 113;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ng00scgd4k
                    section.data(6).logicalSrcIdx = 114;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.ejp5wltkrt
                    section.data(7).logicalSrcIdx = 115;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.luj1mf0fur
                    section.data(8).logicalSrcIdx = 116;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.omi41as3l2
                    section.data(9).logicalSrcIdx = 117;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.emnnr3112x
                    section.data(10).logicalSrcIdx = 118;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.cdgp4gsp3h
                    section.data(11).logicalSrcIdx = 119;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.ofsupcghmu
                    section.data(12).logicalSrcIdx = 120;
                    section.data(12).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.jx0wvnooqh
                    section.data(1).logicalSrcIdx = 121;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.aycgjk4b45
                    section.data(2).logicalSrcIdx = 122;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.opcdwztal3
                    section.data(3).logicalSrcIdx = 123;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.o5uvukdfkz
                    section.data(4).logicalSrcIdx = 124;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 2535540888;
    targMap.checksum1 = 2055807711;
    targMap.checksum2 = 2378655218;
    targMap.checksum3 = 508624394;

