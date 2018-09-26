/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package wlgestor;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

/**
 *
 * @author Markley_Lopes
 */
public class WLGestor {

    /**
     * @param args the command line arguments
     */
private static String[] linha =  new String[1000] ;
public static String[] l =  new String[1000];
public static String[] estoq = new String[1000];
//
private static String[] linha0 =  new String[1000] ;
public static String[] l0 =  new String[1000];
public static String[] estoq0 = new String[1000];

private static String[] linha1 =  new String[1000] ;
public static String[] l1 =  new String[1000];
public static String[] estoq1 = new String[1000];

public static String busca;
public static String busca0;
public static String busca1;
public static String busca5;
public static int saldo = 10;

public static int ver;

    public static void main(String[] args) {
        // TODO code application logic here
  AdminFrame p = new AdminFrame();
p.criaGrafico();
p.setVisible(true);    }
   
  public static void arquivar()
    {
    
 File arquivo = new File("estoque.txt");
          
      try{

        FileWriter fw = new FileWriter(arquivo);
        
        fw.write("");
        for(int i=0; i<1000; i++)
        {
            
          if(estoq[i]!=null){
        fw.write(estoq[i]);
        fw.write(13); fw.write(10);  
          }
            
        }
        
        fw.flush();
              
      }
      catch (IOException ex)
      {
        ex.printStackTrace();
      }
    
    }
     public static void ler()
    {
    File arquivo = new File("estoque.txt");
          
      try{

FileReader fr = new FileReader(arquivo);
 
BufferedReader br = new BufferedReader(fr);
 
//equanto houver mais linhas
    int aux=0;
while (br.ready()) {
//lê a proxima linha
linha[0+aux] = br.readLine();
//faz algo com a linha
//System.out.println(linha);

for(int i = 0; i<1000; i++)
{
   
    l[i] = linha[i];
    estoq[i] = linha[i];

}

aux++;

}
 
br.close();
fr.close();
        
      }
      catch (IOException ex)
      {
        ex.printStackTrace();
      }
    }
     
     
     public static void arquivar0()
    {
    
 File arquivo = new File("estoque0.txt");
          
      try{

        FileWriter fw = new FileWriter(arquivo);
        
        fw.write("");
        for(int i=0; i<1000; i++)
        {
            
          if(estoq0[i]!=null){
        fw.write(estoq0[i]);
        fw.write(13); fw.write(10);  
          }
            
        }
        
        fw.flush();
              
      }
      catch (IOException ex)
      {
        ex.printStackTrace();
      }
    
    }
     public static void ler0()
    {
    File arquivo = new File("estoque0.txt");
          
      try{

FileReader fr = new FileReader(arquivo);
 
BufferedReader br = new BufferedReader(fr);
 
//equanto houver mais linhas
    int aux=0;
while (br.ready()) {
//lê a proxima linha
linha0[0+aux] = br.readLine();
//faz algo com a linha
//System.out.println(linha);

for(int i = 0; i<1000; i++)
{
   
    l0[i] = linha0[i];
    estoq0[i] = linha0[i];

}

aux++;

}
 
br.close();
fr.close();
        
      }
      catch (IOException ex)
      {
        ex.printStackTrace();
      }
    }
     
     
      
     public static void arquivar1()
    {
    
 File arquivo = new File("estoque1.txt");
          
      try{

        FileWriter fw = new FileWriter(arquivo);
        
        fw.write("");
        for(int i=0; i<1000; i++)
        {
            
          if(estoq1[i]!=null){
        fw.write(estoq1[i]);
        fw.write(13); fw.write(10);  
          }
            
        }
        
        fw.flush();
              
      }
      catch (IOException ex)
      {
        ex.printStackTrace();
      }
    
    }
     public static void ler1()
    {
    File arquivo = new File("estoque1.txt");
          
      try{

FileReader fr = new FileReader(arquivo);
 
BufferedReader br = new BufferedReader(fr);
 
//equanto houver mais linhas
    int aux=0;
while (br.ready()) {
//lê a proxima linha
linha1[0+aux] = br.readLine();
//faz algo com a linha
//System.out.println(linha);

for(int i = 0; i<1000; i++)
{
   
    l1[i] = linha1[i];
    estoq1[i] = linha1[i];

}

aux++;

}
 
br.close();
fr.close();
        
      }
      catch (IOException ex)
      {
        ex.printStackTrace();
      }
    }
     
     
}
