package com.example.demo.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import com.example.demo.model.MarkModel;

@Repository("markRepo")
public interface MarkRepository extends JpaRepository<MarkModel, Integer>
{

}